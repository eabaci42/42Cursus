# <div align="center">📡 Minitalk | 42 İstanbul</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=200&section=header&text=Minitalk&fontSize=50&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="Minitalk" />
</div>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=UNIX+Sinyalleri;%C4%B0%C5%9Flemler+Aras%C4%B1+%C4%B0leti%C5%9Fim;%C4%B0kili+Sistem;Client-Server+Mimarisi;Bit+Manipulasyonu" alt="Typing SVG" />
</p>

<div align="center">
  <a href="https://github.com/eabaci42/Minitalk">
    <img src="https://img.shields.io/badge/GitHub-Minitalk-181717?style=for-the-badge&logo=github&logoColor=white" />
  </a>
  <a href="https://www.42istanbul.com.tr/">
    <img src="https://img.shields.io/badge/Okul-42%20%C4%B0stanbul-0055FF?style=for-the-badge&logo=42&logoColor=white" />
  </a>
</div>

## <div align="center">💡 Proje Hakkında</div>

<div align="center">
  <img src="https://media.giphy.com/media/3o7TKSjRrfIPjeiVyM/giphy.gif" alt="Communication" width="300" />
</div>

<p align="center">
  <b>Minitalk</b>, 42 programlama okulunun UNIX sinyalleri kullanarak işlemler arası iletişimi sağlayan bir projesidir. Bu projede, SIGUSR1 ve SIGUSR2 sinyallerini kullanarak bir istemci (client) ve sunucu (server) arasında veri iletimi gerçekleştirilir.
</p>

## <div align="center">🎯 Proje Hedefi</div>

<div align="center">
  <table>
    <tr>
      <td>
        <h3>🔄 İletişim Görevi</h3>
        <p>İki program arasında yalnızca UNIX sinyallerini kullanarak veri iletişimi sağlanması:</p>
        <ul>
          <li>Bir sunucu programı oluşturun ve başlatıldığında PID'sini yazdırın</li>
          <li>İstemci programı, bir dize ve sunucu PID'sini argüman olarak alacak</li>
          <li>İstemci, sunucuya dizeyi gönderecek</li>
          <li>Sunucu, alınan dizeyi hızlı bir şekilde gösterecek</li>
          <li>Sunucu çoklu istemci bağlantılarını hızlı bir şekilde işleyebilmeli</li>
          <li>İletişim sadece SIGUSR1 ve SIGUSR2 sinyalleri kullanılarak yapılmalı</li>
        </ul>
      </td>
      <td>
        <h3>🧠 Ana Zorluklar</h3>
        <ul>
          <li>Veriyi bitlere ayırıp sinyaller ile iletme</li>
          <li>Sinyallerin eşzamanlı yönetimi</li>
          <li>Sinyal zamanlama ve senkronizasyon sorunları</li>
          <li>Bit düzeyinde manipülasyon</li>
          <li>Veri bütünlüğünü koruma</li>
          <li>Çoklu istemci desteği (bonus)</li>
          <li>Unicode karakterleri desteği (bonus)</li>
        </ul>
      </td>
    </tr>
  </table>
</div>

## <div align="center">⚙️ İletişim Mekanizması</div>

<div align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Signals" width="400" />
</div>

<p align="center">
  Minitalk, bit düzeyinde bir iletişim protokolü kullanır:
</p>

<div align="center">
  <table>
    <tr>
      <th>Adım</th>
      <th>Açıklama</th>
    </tr>
    <tr>
      <td>1. Sunucu Başlatma</td>
      <td>Sunucu çalıştırılır ve kendi PID'sini (İşlem Kimliği) gösterir</td>
    </tr>
    <tr>
      <td>2. İstemci Bağlantısı</td>
      <td>İstemci, sunucu PID'sini ve göndermek istediği dizeyi alır</td>
    </tr>
    <tr>
      <td>3. Karakter Dönüşümü</td>
      <td>Her karakter 8 bitlik ikili (binary) gösterimine dönüştürülür</td>
    </tr>
    <tr>
      <td>4. Bit Gönderimi</td>
      <td>
        - SIGUSR1: "0" biti göndermek için<br>
        - SIGUSR2: "1" biti göndermek için
      </td>
    </tr>
    <tr>
      <td>5. Sunucu Alımı</td>
      <td>Sunucu sinyalleri alır ve bitleri karakterlere dönüştürür</td>
    </tr>
    <tr>
      <td>6. Karakter Oluşturma</td>
      <td>8 bit tamamlandığında, bir karakter oluşturulur ve yazdırılır</td>
    </tr>
    <tr>
      <td>7. İletişim Tamamlama</td>
      <td>NULL karakteri (tüm bitler 0) iletişimin sonunu belirtir</td>
    </tr>
  </table>
</div>

## <div align="center">💻 Kod Özeti</div>

<div align="center">
  <img src="https://media.giphy.com/media/l0HlMldqhsZcg/giphy.gif" alt="Coding" width="400" />
</div>

```c
// server.c (basitleştirilmiş)
void signal_handler(int signum, siginfo_t *info, void *context)
{
    static unsigned char c = 0;
    static int bit_count = 0;
    static pid_t client_pid = 0;
    
    (void)context;
    
    // İlk sinyalde istemci PID'sini kaydet
    if (client_pid == 0)
        client_pid = info->si_pid;
    
    // Gelen sinyale göre bit ekle
    if (signum == SIGUSR1)
        c = c << 1; // 0 biti (kaydır, ekleme yapma)
    else if (signum == SIGUSR2)
        c = (c << 1) | 1; // 1 biti
    
    bit_count++;
    
    // 8 bit tamamlandığında
    if (bit_count == 8)
    {
        // Null karakteri gelince yeni satır ekle ve istemci PID'yi sıfırla
        if (c == 0)
        {
            ft_putchar('\n');
            client_pid = 0;
        }
        else
            ft_putchar(c);
        
        c = 0;
        bit_count = 0;
    }
    
    // İstemciye sinyal göndererek alındı bilgisi ver
    kill(client_pid, SIGUSR1);
}

int main(void)
{
    struct sigaction sa;
    
    // PID'yi yazdır
    ft_putstr("Server PID: ");
    ft_putnbr(getpid());
    ft_putchar('\n');
    
    // Sinyal işleyicisini ayarla
    sa.sa_sigaction = signal_handler;
    sa.sa_flags = SA_SIGINFO;
    sigemptyset(&sa.sa_mask);
    
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    
    // Sinyalleri bekle
    while (1)
        pause();
    
    return (0);
}
```

```c
// client.c (basitleştirilmiş)
void send_char(int pid, unsigned char c)
{
    int bit;
    
    // Her karakteri bit bit gönder (en yüksek değerlikli bitten başla)
    for (bit = 7; bit >= 0; bit--)
    {
        if ((c >> bit) & 1)
            kill(pid, SIGUSR2); // 1 biti
        else
            kill(pid, SIGUSR1); // 0 biti
        
        // Sunucudan onay bekle
        usleep(100);
    }
}

void signal_handler(int signum)
{
    // Sunucudan onay geldi
    if (signum == SIGUSR1)
        return;
}

int main(int argc, char **argv)
{
    int pid;
    char *message;
    
    if (argc != 3)
    {
        ft_putstr("Usage: ./client [server PID] [message]\n");
        return (1);
    }
    
    // Sunucu PID'sini ve mesajı al
    pid = ft_atoi(argv[1]);
    message = argv[2];
    
    // Sinyal işleyicisini ayarla
    signal(SIGUSR1, signal_handler);
    
    // Mesajı karakter karakter gönder
    while (*message)
    {
        send_char(pid, *message);
        message++;
    }
    
    // NULL karakteri gönder (mesaj sonu)
    send_char(pid, '\0');
    
    return (0);
}
```

## <div align="center">🚀 Bonus Özellikler</div>

<div align="center">
  <table>
    <tr>
      <td width="50%" align="center">
        <h3>🔄 İstemci Onayı</h3>
        <img src="https://media.giphy.com/media/l0MYt5jPR6QX5pnqM/giphy.gif" width="100%" />
        <p><b>"Her bir bit gönderiminden sonra sunucudan onay alma"</b></p>
        <p>Veri iletiminin güvenilirliğini artırmak için sunucudan her bit alındığında istemciye onay sinyali gönderilir.</p>
      </td>
      <td width="50%" align="center">
        <h3>🧠 Unicode Desteği</h3>
        <img src="https://media.giphy.com/media/3oz8xTJTX8v3xErJEA/giphy.gif" width="100%" />
        <p><b>"Genişletilmiş ASCII ve Unicode karakterleri desteği"</b></p>
        <p>ASCII dışında Unicode ve diğer karakter setlerini de destekleyerek çok dilli metin iletimi sağlanmıştır.</p>
      </td>
    </tr>
  </table>
</div>

## <div align="center">💻 Kullanım</div>

```bash
# Projeyi derle
make

# Sunucuyu başlat (yeni bir terminalde)
./server

# İstemciyi çalıştır (başka bir terminalde)
./client [server_pid] "Merhaba 42 İstanbul!"

# Bonus sürümü derle
make bonus

# Bonus sunucuyu başlat
./server_bonus

# Bonus istemciyi çalıştır
./client_bonus [server_pid] "Emojiler de çalışır: 🚀 🔥 ✨"
```

## <div align="center">🧪 Test Senaryoları</div>

<div align="center">
  <img src="https://media.giphy.com/media/LMt9638dO8dftAjtco/giphy.gif" alt="Testing" width="200" />
</div>

<p align="center">
  Minitalk projesini aşağıdaki senaryolarda test ettim:
</p>

<div align="center">
  <ul>
    <li>✅ Kısa, orta ve çok uzun metinler</li>
    <li>✅ Boş dizeler</li>
    <li>✅ Özel karakterler (`, !, @, #, $, %, ^, &, *, (, ), [, ], {, }, ;, ', ", :, vb.)</li>
    <li>✅ Unicode karakterleri (emoji, farklı dil karakterleri)</li>
    <li>✅ Aynı anda birden fazla istemci bağlantısı</li>
    <li>✅ Hızlı ardışık veri gönderimi</li>
    <li>✅ Geçersiz PID durumu</li>
    <li>✅ Sinyal kesintileri ve yönetimi</li>
  </ul>
</div>

## <div align="center">📝 Öğrenilen Dersler</div>

<blockquote align="center" style="background-color: #1e1e3f; padding: 15px; border-radius: 5px; border-left: 5px solid #0891b2; margin-top: 20px;">
  <p>💡 <b>"İşlemler arası iletişim, modern işletim sistemlerinin temel taşlarından biridir."</b></p>
  <p><i>Minitalk projesinde öğrendiklerim:</i></p>
  <ol>
    <li>UNIX sinyal mekanizmasının derinliklerine inme</li>
    <li>İşlemler arası iletişim (IPC) prensipleri</li>
    <li>Bit düzeyinde manipülasyon ve bit operatörleri</li>
    <li>Asenkron programlama zorlukları</li>
    <li>Düşük seviyeli sistem programlaması</li>
  </ol>
</blockquote>

## <div align="center">⚡ Teknik Zorluklar ve Çözümler</div>

<div align="center">
  <table>
    <tr>
      <th>Zorluk</th>
      <th>Çözüm</th>
    </tr>
    <tr>
      <td>Sinyal Kaybı</td>
      <td>Her bit için onay mekanizması eklenerek veri bütünlüğü sağlandı</td>
    </tr>
    <tr>
      <td>Çoklu İstemci Desteği</td>
      <td>PID tabanlı istemci takibi ile her istemcinin mesajı ayrı ayrı işlendi</td>
    </tr>
    <tr>
      <td>Zamanlama Sorunları</td>
      <td>Uygun usleep değerleri ve dinamik bekleme süresi ayarlamaları</td>
    </tr>
    <tr>
      <td>Unicode İşleme</td>
      <td>8 bitlik işleme mekanizması genişletilerek 16-bit/32-bit karakter desteği</td>
    </tr>
    <tr>
      <td>Sinyal Kesintileri</td>
      <td>SA_SIGINFO bayrağı kullanılarak detaylı sinyal bilgisi erişimi</td>
    </tr>
  </table>
</div>

## <div align="center">📞 İletişim</div>

<div align="center">
  <a href="mailto:ertugrul@atikrost.com">
    <img src="https://img.shields.io/badge/Email-ertugrul@atikrost.com-D14836?style=for-the-badge&logo=gmail&logoColor=white" />
  </a>
  <a href="https://www.linkedin.com/in/eabaci42">
    <img src="https://img.shields.io/badge/LinkedIn-eabaci42-0077B5?style=for-the-badge&logo=linkedin&logoColor=white" />
  </a>
  <a href="https://github.com/eabaci42">
    <img src="https://img.shields.io/badge/GitHub-eabaci42-181717?style=for-the-badge&logo=github&logoColor=white" />
  </a>
</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=150&section=footer&fontSize=30"/>
</div>

<div align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891b2&center=true&vCenter=true&width=500&lines=Bit+bit+ileti%C5%9Fim+kurar%C4%B1z...;Sinyaller+bilgi+ta%C5%9F%C4%B1r...;Protokoller+d%C3%BCnyay%C4%B1+birle%C5%9Ftirir...;%C4%B0ki+program+aras%C4%B1ndaki+k%C3%B6pr%C3%BC..." alt="Slogan" />
</div> 