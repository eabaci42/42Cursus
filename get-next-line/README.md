# <div align="center">📜 Get Next Line | 42 İstanbul</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=200&section=header&text=Get%20Next%20Line&fontSize=50&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="Get Next Line" />
</div>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=Sat%C4%B1r+Sat%C4%B1r+Dosya+Okuma;Statik+De%C4%9Fi%C5%9Fkenler;Bellek+Y%C3%B6netimi;Dosya+Tan%C4%B1mlay%C4%B1c%C4%B1lar%C4%B1;Tampon+Y%C3%B6netimi" alt="Typing SVG" />
</p>

<div align="center">
  <a href="https://github.com/eabaci42/get-next-line">
    <img src="https://img.shields.io/badge/GitHub-Get%20Next%20Line-181717?style=for-the-badge&logo=github&logoColor=white" />
  </a>
  <a href="https://www.42istanbul.com.tr/">
    <img src="https://img.shields.io/badge/Okul-42%20%C4%B0stanbul-0055FF?style=for-the-badge&logo=42&logoColor=white" />
  </a>
</div>

## <div align="center">💡 Proje Hakkında</div>

<div align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Reading Lines" width="300" />
</div>

<p align="center">
  <b>Get Next Line</b>, 42 programlama okulunun bir projesidir. Bu projede, bir dosyayı satır satır okuyabilen bir fonksiyon geliştirerek, dosya işlemleri, bellek yönetimi ve statik değişkenler konusunda derinlemesine bilgi edinilir. Bu fonksiyon, her çağrıldığında dosyadan bir sonraki satırı döndürür.
</p>

## <div align="center">📋 Fonksiyonun Özellikleri</div>

<table align="center">
  <tr>
    <td>
      <h3>🔄 Temel İşlev</h3>
      <p><code>char *get_next_line(int fd);</code></p>
      <ul>
        <li>Belirtilen dosya tanımlayıcısından (fd) bir satır okur</li>
        <li>Her çağrıldığında bir sonraki satırı döndürür</li>
        <li>Dosyanın sonuna gelindiğinde NULL döndürür</li>
        <li>Satırları yeni satır karakteri ('\n') ile ayırır</li>
        <li>Yeni satır karakterini de döndürür</li>
      </ul>
    </td>
    <td>
      <h3>🧠 Teknik Zorluklar</h3>
      <ul>
        <li>Statik değişkenler kullanarak önceki okuma pozisyonunu hatırlama</li>
        <li>Bellek sızıntılarını önleme</li>
        <li>Değişken boyutlu tampon yönetimi</li>
        <li>Tamamlanmamış satırları doğru şekilde ele alma</li>
        <li>Farklı dosya tanımlayıcılarını destekleme (Bonus)</li>
      </ul>
    </td>
  </tr>
</table>

## <div align="center">⚙️ Kod Özeti</div>

<div align="center">
  <img src="https://media.giphy.com/media/XDMyvrmMnaMQJhLqbY/giphy.gif" alt="Coding" width="400" />
</div>

```c
// get_next_line.h
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *s);

#endif
```

```c
// get_next_line.c ana fonksiyonu (basitleştirilmiş)
char	*get_next_line(int fd)
{
    static char *buffer;  // Okunan verileri saklamak için statik değişken
    char        *line;    // Döndürülecek satır

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    // Dosyadan veri oku ve tampona ekle
    buffer = read_from_file(fd, buffer);
    if (!buffer)
        return (NULL);

    // Tampondan bir satır çıkar
    line = extract_line(buffer);
    
    // Tamponu güncelle, kullanılan kısmı çıkar
    buffer = update_buffer(buffer);

    return (line);
}
```

## <div align="center">📊 Genel Yaklaşım</div>

<div align="center">
  <table>
    <tr>
      <th>Adım</th>
      <th>Açıklama</th>
    </tr>
    <tr>
      <td>1. Dosyadan Okuma</td>
      <td>Dosyadan belirli büyüklükte (BUFFER_SIZE) veri okunur</td>
    </tr>
    <tr>
      <td>2. Tampon Yönetimi</td>
      <td>Okunan veriler statik bir tamponda saklanır</td>
    </tr>
    <tr>
      <td>3. Satır Ayıklama</td>
      <td>Tampondan bir satır (yeni satır karakterine kadar) ayıklanır</td>
    </tr>
    <tr>
      <td>4. Tamponu Güncelleme</td>
      <td>Tampondan kullanılan kısım çıkarılarak güncellenir</td>
    </tr>
    <tr>
      <td>5. Bellek Yönetimi</td>
      <td>Gerekli bellek tahsisi ve serbest bırakma işlemleri yapılır</td>
    </tr>
  </table>
</div>

## <div align="center">🚀 Bonus Özellikleri</div>

<div align="center">
  <img src="https://media.giphy.com/media/xTiTnwi8Azjnva46Fq/giphy.gif" alt="Bonus Features" width="300" />
</div>

<p align="center">
  Get Next Line projesinin bonus kısmında ek yetenekler geliştirdim:
</p>

<div align="center">
  <table>
    <tr>
      <td width="50%" align="center">
        <h3>🔄 Çoklu Dosya Desteği</h3>
        <img src="https://media.giphy.com/media/3o6Mb5RfORdi8W39O8/giphy.gif" width="100%" />
        <p><b>"Tek statik değişken ile birden fazla dosyayı aynı anda işleme"</b></p>
        <p>Farklı dosya tanımlayıcılarını destekleyerek, aynı anda birden fazla dosyayı satır satır okuyabilir.</p>
      </td>
      <td width="50%" align="center">
        <h3>🧠 Verimli Bellek Kullanımı</h3>
        <img src="https://media.giphy.com/media/A06UFEx8jxEwU/giphy.gif" width="100%" />
        <p><b>"Sızıntısız ve optimize edilmiş bellek yönetimi"</b></p>
        <p>Bellek sızıntılarını önlemek için titiz bir bellek tahsis ve serbest bırakma stratejisi kullanılmıştır.</p>
      </td>
    </tr>
  </table>
</div>

## <div align="center">💻 Kullanım Örneği</div>

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int     fd;
    char    *line;

    // Dosyayı aç
    fd = open("ornek.txt", O_RDONLY);
    if (fd == -1)
        return (1);

    // Dosyayı satır satır oku
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);  // Belleği serbest bırak
    }

    // Dosyayı kapat
    close(fd);
    return (0);
}
```

## <div align="center">🧪 Test Yaklaşımı</div>

<div align="center">
  <img src="https://media.giphy.com/media/LMt9638dO8dftAjtco/giphy.gif" alt="Testing" width="200" />
</div>

<p align="center">
  Get Next Line projesini aşağıdaki senaryolarda test ettim:
</p>

<div align="center">
  <ul>
    <li>✅ Farklı BUFFER_SIZE değerleri (1, 42, 9999, 10000000)</li>
    <li>✅ Boş dosyalar</li>
    <li>✅ Tek satırlık dosyalar</li>
    <li>✅ Çok uzun satırlar (~10000 karakter)</li>
    <li>✅ Yeni satır karakteri içermeyen dosyalar</li>
    <li>✅ Birden fazla dosyayı aynı anda okuma (bonus)</li>
    <li>✅ Standart giriş (STDIN) okuma</li>
    <li>✅ Hata durumları (geçersiz fd, bellek hatası)</li>
  </ul>
</div>

## <div align="center">📝 Öğrenilen Dersler</div>

<blockquote align="center" style="background-color: #1e1e3f; padding: 15px; border-radius: 5px; border-left: 5px solid #0891b2; margin-top: 20px;">
  <p>💡 <b>"Statik değişkenler, durumu korumak için güçlü bir araçtır, ancak dikkatli kullanılmalıdır."</b></p>
  <p><i>Get Next Line projesinde öğrendiklerim:</i></p>
  <ol>
    <li>Dosya işlemleri ve düşük seviyeli I/O fonksiyonlarını kullanma</li>
    <li>Statik değişkenlerin gücünü ve potansiyel tuzaklarını anlama</li>
    <li>Karmaşık bellek yönetimi ve dinamik bellek tahsisi</li>
    <li>Tampon stratejilerini optimize etme</li>
    <li>Edge case'leri ele alma ve sağlam kod yazma</li>
  </ol>
</blockquote>

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
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891b2&center=true&vCenter=true&width=500&lines=Bir+kay%C4%B1t+de%C4%9Fil%2C+bir+kay%C4%B1t+olu%C5%9Ftur...;Sat%C4%B1r+sat%C4%B1r+ilerle...;Bellekle+dost+ol...;Her+dosyan%C4%B1n+bir+hikayesi+vard%C4%B1r..." alt="Slogan" />
</div> 