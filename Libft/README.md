# <div align="center">📚 Libft | 42 İstanbul</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=200&section=header&text=Libft%20Projesi&fontSize=50&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="Libft" />
</div>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=Kendi+K%C3%BCt%C3%BCphaneni+Olu%C5%9Ftur;Temel+C+Fonksiyonlar%C4%B1;Bellek+Y%C3%B6netimi;String+Manipulasyon;Veri+Yap%C4%B1lar%C4%B1" alt="Typing SVG" />
</p>

<div align="center">
  <a href="https://github.com/eabaci42/Libft">
    <img src="https://img.shields.io/badge/GitHub-Libft-181717?style=for-the-badge&logo=github&logoColor=white" />
  </a>
  <a href="https://www.42istanbul.com.tr/">
    <img src="https://img.shields.io/badge/Okul-42%20%C4%B0stanbul-0055FF?style=for-the-badge&logo=42&logoColor=white" />
  </a>
</div>

## <div align="center">💡 Proje Hakkında</div>

<div align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Library" width="300" />
</div>

<p align="center">
  <b>Libft</b>, 42 programlama okulunun ilk projesidir. Bu projede, C Standart Kütüphanesi'ndeki bazı temel fonksiyonları yeniden yazarak, ileride kullanılmak üzere kişisel bir C kütüphanesi oluşturulur. Bu kütüphane, string manipülasyonu, bellek yönetimi, liste işlemleri gibi temel fonksiyonları içerir.
</p>

## <div align="center">📋 İçerik</div>

<table align="center">
  <tr>
    <td>
      <h3>🧩 Libc Fonksiyonları</h3>
      <ul>
        <li><code>ft_isalpha</code> - Karakterin alfabetik olup olmadığını kontrol eder</li>
        <li><code>ft_isdigit</code> - Karakterin rakam olup olmadığını kontrol eder</li>
        <li><code>ft_isalnum</code> - Karakterin alfanümerik olup olmadığını kontrol eder</li>
        <li><code>ft_isascii</code> - Karakterin ASCII karakter setinde olup olmadığını kontrol eder</li>
        <li><code>ft_isprint</code> - Karakterin yazdırılabilir olup olmadığını kontrol eder</li>
        <li><code>ft_strlen</code> - Dizgenin uzunluğunu hesaplar</li>
        <li><code>ft_memset</code> - Bellek bloğunu belirli bir değerle doldurur</li>
        <li><code>ft_bzero</code> - Bellek bloğunu sıfırlar</li>
        <li><code>ft_memcpy</code> - Bellek alanlarını kopyalar</li>
        <li><code>ft_memmove</code> - Çakışan bellek alanlarını güvenli şekilde kopyalar</li>
        <li><code>ft_strlcpy</code> - Dizgeleri güvenli şekilde kopyalar</li>
        <li><code>ft_strlcat</code> - Dizgeleri güvenli şekilde birleştirir</li>
        <li><code>ft_toupper</code> - Küçük harfi büyük harfe çevirir</li>
        <li><code>ft_tolower</code> - Büyük harfi küçük harfe çevirir</li>
        <li><code>ft_strchr</code> - Bir dizgede karakter arar (ilk bulunan)</li>
        <li><code>ft_strrchr</code> - Bir dizgede karakter arar (son bulunan)</li>
        <li><code>ft_strncmp</code> - İki dizgeyi belirli bir uzunluğa kadar karşılaştırır</li>
        <li><code>ft_memchr</code> - Bellek bloğunda byte arar</li>
        <li><code>ft_memcmp</code> - İki bellek bloğunu karşılaştırır</li>
        <li><code>ft_strnstr</code> - Bir dizgede alt dizge arar</li>
        <li><code>ft_atoi</code> - Dizgeyi tam sayıya (integer) dönüştürür</li>
      </ul>
    </td>
    <td>
      <h3>🧠 Ek Fonksiyonlar</h3>
      <ul>
        <li><code>ft_calloc</code> - Sıfırlanmış bellek bloğu ayırır</li>
        <li><code>ft_strdup</code> - Dizgeyi yeni bellekte kopyalar</li>
        <li><code>ft_substr</code> - Dizgenin bir parçasını kopyalar</li>
        <li><code>ft_strjoin</code> - İki dizgeyi birleştirir</li>
        <li><code>ft_strtrim</code> - Dizgenin başındaki ve sonundaki karakterleri kırpar</li>
        <li><code>ft_split</code> - Dizgeyi belirli bir ayırıcıya göre parçalar</li>
        <li><code>ft_itoa</code> - Tam sayıyı (integer) dizgeye dönüştürür</li>
        <li><code>ft_strmapi</code> - Dizgenin her karakterine belirli bir fonksiyon uygular</li>
        <li><code>ft_striteri</code> - Dizgenin her karakterinin indeksi ile belirli bir fonksiyon uygular</li>
        <li><code>ft_putchar_fd</code> - Karakteri belirli bir dosya tanımlayıcısına yazar</li>
        <li><code>ft_putstr_fd</code> - Dizgeyi belirli bir dosya tanımlayıcısına yazar</li>
        <li><code>ft_putendl_fd</code> - Dizgeyi yeni satırla belirli bir dosya tanımlayıcısına yazar</li>
        <li><code>ft_putnbr_fd</code> - Sayıyı belirli bir dosya tanımlayıcısına yazar</li>
      </ul>
    </td>
  </tr>
  <tr>
    <td colspan="2">
      <h3>🔄 Bağlı Liste Fonksiyonları (Bonus)</h3>
      <ul>
        <li><code>ft_lstnew</code> - Yeni bir liste elemanı oluşturur</li>
        <li><code>ft_lstadd_front</code> - Listenin başına eleman ekler</li>
        <li><code>ft_lstsize</code> - Listedeki eleman sayısını hesaplar</li>
        <li><code>ft_lstlast</code> - Listenin son elemanını döndürür</li>
        <li><code>ft_lstadd_back</code> - Listenin sonuna eleman ekler</li>
        <li><code>ft_lstdelone</code> - Bir liste elemanını siler</li>
        <li><code>ft_lstclear</code> - Tüm liste elemanlarını siler</li>
        <li><code>ft_lstiter</code> - Listedeki her elemana belirli bir fonksiyon uygular</li>
        <li><code>ft_lstmap</code> - Listenin her elemanına belirli bir fonksiyon uygulayarak yeni bir liste oluşturur</li>
      </ul>
    </td>
  </tr>
</table>

## <div align="center">⚙️ Kullanım</div>

<div align="center">
  <img src="https://media.giphy.com/media/kH6CqYiquZawmU1HI6/giphy.gif" alt="C Library" width="400" />
</div>

```bash
# Kütüphaneyi derle
make

# Bonus fonksiyonlarını da derle
make bonus

# Temizle
make clean

# Tüm dosyaları temizle
make fclean

# Yeniden derle
make re
```

<p align="center">
  Libft kütüphanesini kendi projelerinizde kullanmak için:
</p>

```c
// Kütüphaneyi dahil et
#include "libft.h"

int main()
{
    // Libft fonksiyonlarını kullan
    char *str = ft_strdup("Merhaba 42 İstanbul!");
    ft_putstr_fd(str, 1);
    free(str);
    return (0);
}
```

<p align="center">
  Derleme yaparken kütüphaneyi bağla:
</p>

```bash
gcc your_program.c -L. -lft -o your_program
```

## <div align="center">🧪 Test ve Değerlendirme</div>

<div align="center">
  <img src="https://media.giphy.com/media/3o7TKSjRrfIPjeiVyM/giphy.gif" alt="Testing" width="400" />
</div>

<p align="center">
  Libft projesinin fonksiyonel testlerini yapmak için çeşitli test kütüphaneleri kullanılabilir. Bunlardan bazıları:
</p>

<div align="center">
  <table>
    <tr>
      <th>Test Paketi</th>
      <th>Kullanım</th>
    </tr>
    <tr>
      <td><a href="https://github.com/alelievr/libft-unit-test">libft-unit-test</a></td>
      <td>Kapsamlı birim testleri</td>
    </tr>
    <tr>
      <td><a href="https://github.com/jtoty/Libftest">Libftest</a></td>
      <td>Detaylı fonksiyon testleri</td>
    </tr>
    <tr>
      <td><a href="https://github.com/Tripouille/libftTester">libftTester</a></td>
      <td>Modern test çerçevesi</td>
    </tr>
  </table>
</div>

## <div align="center">📝 Önemli Notlar</div>

<blockquote align="center" style="background-color: #1e1e3f; padding: 15px; border-radius: 5px; border-left: 5px solid #0891b2; margin-top: 20px;">
  <p>💡 <b>"Kendi kütüphaneni oluşturmak, C programlama dilinin temellerini kavramanın en etkili yollarından biridir."</b></p>
  <p><i>Libft projesi geliştirirken önemli deneyimler:</i></p>
  <ol>
    <li>Her fonksiyonu yazmadan önce nasıl çalıştığını tam olarak anlamak</li>
    <li>Bellek yönetiminde dikkatli olmak ve sızıntılara karşı önlem almak</li>
    <li>Detaylı test yapmak ve sınır durumlarını düşünmek</li>
    <li>Optimizasyon ve kod temizliği arasında denge kurmak</li>
    <li>Hata yönetimini titizlikle ele almak</li>
  </ol>
</blockquote>

## <div align="center">🚀 Neden Libft?</div>

<div align="center">
  <table>
    <tr>
      <td width="50%" align="center">
        <h3>🛠️ Temel Beceriler</h3>
        <img src="https://media.giphy.com/media/l3vR85PnGsBwu1PFK/giphy.gif" width="100%" />
        <p><b>"Balık tutmayı öğrenmek, balık vermeye göre daha değerlidir."</b></p>
        <p>Libft projesi, hazır kütüphaneleri kullanmak yerine, nasıl çalıştıklarını öğrenerek C programlama dilinin temellerini pekiştirir.</p>
      </td>
      <td width="50%" align="center">
        <h3>🧩 Modüler Kodlama</h3>
        <img src="https://media.giphy.com/media/3oEjHWpiVIOGXT5l9m/giphy.gif" width="100%" />
        <p><b>"Karmaşık sistemleri basit parçalara bölerek anla."</b></p>
        <p>Kendi kütüphanenizi oluşturmak, modüler ve yeniden kullanılabilir kod yazma alışkanlığını kazandırır.</p>
      </td>
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
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891b2&center=true&vCenter=true&width=500&lines=K%C3%B6t%C3%BC+kod+yazabilen+herkes+g%C3%B6rebilir...;%C4%B0yi+kod+yazmak+i%C3%A7in+%C3%A7al%C4%B1%C5%9Fmak+gerekir...;Bir+kez+yaz%2C+her+yerde+kullan...;Basit+ve+anla%C5%9F%C4%B1l%C4%B1r+kod+yaz..." alt="Slogan" />
</div> 