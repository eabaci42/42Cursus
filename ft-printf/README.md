# <div align="center">🖨️ ft_printf | 42 İstanbul</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=200&section=header&text=ft_printf&fontSize=50&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="ft_printf" />
</div>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=Kendi+printf+Fonksiyonun;De%C4%9Fi%C5%9Fken+Arg%C3%BCmanlar;Format+Belirleme;Tip+D%C3%B6n%C3%BC%C5%9F%C3%BCm%C3%BC;String+Bi%C3%A7imlendirme" alt="Typing SVG" />
</p>

<div align="center">
  <a href="https://github.com/eabaci42/ft-printf">
    <img src="https://img.shields.io/badge/GitHub-ft_printf-181717?style=for-the-badge&logo=github&logoColor=white" />
  </a>
  <a href="https://www.42istanbul.com.tr/">
    <img src="https://img.shields.io/badge/Okul-42%20%C4%B0stanbul-0055FF?style=for-the-badge&logo=42&logoColor=white" />
  </a>
</div>

## <div align="center">💡 Proje Hakkında</div>

<div align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Printing" width="300" />
</div>

<p align="center">
  <b>ft_printf</b>, C Standart Kütüphanesi'ndeki <code>printf</code> fonksiyonunu yeniden oluşturmayı amaçlayan 42 programlama okulunun bir projesidir. Bu projede, değişken argümanlar, format belirteçleri ve tip dönüşümleri gibi ileri C programlama konseptleri uygulanmıştır.
</p>

## <div align="center">📋 Desteklenen Dönüşümler</div>

<table align="center">
  <tr>
    <td width="50%">
      <h3>🧩 Temel Dönüşümler</h3>
      <ul>
        <li><code>%c</code> - Tek bir karakter</li>
        <li><code>%s</code> - Karakter dizisi (string)</li>
        <li><code>%p</code> - İşaretçi adresi (hexadecimal)</li>
        <li><code>%d</code> - İşaretli ondalık tam sayı</li>
        <li><code>%i</code> - İşaretli ondalık tam sayı</li>
        <li><code>%u</code> - İşaretsiz ondalık tam sayı</li>
        <li><code>%x</code> - Küçük harf hexadecimal (16'lık taban)</li>
        <li><code>%X</code> - Büyük harf hexadecimal (16'lık taban)</li>
        <li><code>%%</code> - Yüzde işareti</li>
      </ul>
    </td>
    <td width="50%">
      <h3>🧠 Teknik Zorluklar</h3>
      <ul>
        <li>Değişken sayıda argüman işleme (va_list, va_arg)</li>
        <li>Farklı veri türleri için uygun dönüşüm mantığı</li>
        <li>Format dizgisinin ayrıştırılması</li>
        <li>Bellek yönetimi ve optimizasyon</li>
        <li>Standart printf ile uyumlu davranış</li>
        <li>Hata durumlarını ele alma</li>
      </ul>
    </td>
  </tr>
</table>

## <div align="center">⚙️ Kod Özeti</div>

<div align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Code Summary" width="400" />
</div>

```c
// ft_printf.h (basitleştirilmiş)
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putptr(void *ptr);
int	ft_puthex(unsigned int n, int uppercase);
int	ft_putunsigned(unsigned int n);

#endif
```

```c
// ft_printf.c (ana fonksiyon örneği)
int	ft_printf(const char *format, ...)
{
    va_list	args;
    int		count;
    int		i;

    va_start(args, format);
    count = 0;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            count += handle_format(format[i], args);
        }
        else
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (count);
}
```

## <div align="center">💻 Kullanım Örneği</div>

```c
#include "ft_printf.h"

int main(void)
{
    // Temel kullanım
    ft_printf("Merhaba, %s! Ben %d yaşındayım.\n", "Dünya", 25);
    
    // Farklı dönüşümler
    char c = 'A';
    char *s = "42 İstanbul";
    int d = 42;
    unsigned int u = 4242;
    int hex = 0xABCD;
    void *ptr = &c;
    
    ft_printf("Karakter: %c\n", c);
    ft_printf("String: %s\n", s);
    ft_printf("İşaretli tam sayı: %d veya %i\n", d, d);
    ft_printf("İşaretsiz tam sayı: %u\n", u);
    ft_printf("Hexadecimal (küçük): %x\n", hex);
    ft_printf("Hexadecimal (büyük): %X\n", hex);
    ft_printf("İşaretçi: %p\n", ptr);
    ft_printf("Yüzde işareti: %%\n");
    
    return (0);
}
```

## <div align="center">📊 Algoritmik Yaklaşım</div>

<div align="center">
  <table>
    <tr>
      <th>Adım</th>
      <th>Açıklama</th>
    </tr>
    <tr>
      <td>1. Başlatma</td>
      <td>va_list ile değişken argüman listesini başlat</td>
    </tr>
    <tr>
      <td>2. Format Ayrıştırma</td>
      <td>Format dizgesini karakter karakter okuyarak ilerle</td>
    </tr>
    <tr>
      <td>3. Dönüşüm İşleme</td>
      <td>% işaretini gördüğünde sonraki karaktere göre uygun dönüşümü yap</td>
    </tr>
    <tr>
      <td>4. Özel Karakter Dönüşümü</td>
      <td>Her dönüşüm tipi için özel bir fonksiyon çağır</td>
    </tr>
    <tr>
      <td>5. Karakter Sayma</td>
      <td>Yazdırılan toplam karakter sayısını takip et</td>
    </tr>
    <tr>
      <td>6. Sonlandırma</td>
      <td>va_end ile değişken argüman listesini sonlandır</td>
    </tr>
  </table>
</div>

## <div align="center">🚀 Teknik Detaylar</div>

<div align="center">
  <table>
    <tr>
      <td width="50%" align="center">
        <h3>🔄 Değişken Argümanlar</h3>
        <img src="https://media.giphy.com/media/l0HlMldqhsZcg/giphy.gif" width="100%" />
        <p><b>"Fonksiyon imzasında belirtilmeyen değişken sayıda argümanları işleme"</b></p>
        <p><code>stdarg.h</code> kütüphanesindeki <code>va_list</code>, <code>va_start</code>, <code>va_arg</code> ve <code>va_end</code> makrolarını kullanarak değişken sayıda argüman işlenir.</p>
      </td>
      <td width="50%" align="center">
        <h3>🧠 Tip Dönüşümleri</h3>
        <img src="https://media.giphy.com/media/3oEjHWpiVIOGXT5l9m/giphy.gif" width="100%" />
        <p><b>"Farklı veri türlerini düzgün şekilde dize biçimine dönüştürme"</b></p>
        <p>Her veri türü için özel dönüşüm fonksiyonları geliştirerek, farklı format belirteçleri (%d, %s, %p vb.) desteklenir.</p>
      </td>
    </tr>
  </table>
</div>

## <div align="center">🧪 Test Senaryoları</div>

<div align="center">
  <img src="https://media.giphy.com/media/LMt9638dO8dftAjtco/giphy.gif" alt="Testing" width="200" />
</div>

<p align="center">
  ft_printf projesini aşağıdaki senaryolarda test ettim:
</p>

<div align="center">
  <ul>
    <li>✅ Temel format belirteçleri: %c, %s, %p, %d, %i, %u, %x, %X, %%</li>
    <li>✅ Boş dizeler ve NULL işaretçileri</li>
    <li>✅ Sınır değerleri (INT_MIN, INT_MAX, UINT_MAX vb.)</li>
    <li>✅ Karmaşık format dizgeleri</li>
    <li>✅ Çok sayıda argüman ile çağrılar</li>
    <li>✅ Gerçek printf fonksiyonu ile karşılaştırmalı testler</li>
  </ul>
</div>

## <div align="center">📝 Öğrenilen Dersler</div>

<blockquote align="center" style="background-color: #1e1e3f; padding: 15px; border-radius: 5px; border-left: 5px solid #0891b2; margin-top: 20px;">
  <p>💡 <b>"Karmaşık bir işlevin iç çalışma mekanizmasını anlamak, bir programcının anlayışını derinleştirir."</b></p>
  <p><i>ft_printf projesinde öğrendiklerim:</i></p>
  <ol>
    <li>Değişken argümanların C'de nasıl işlendiğini anlama</li>
    <li>Farklı veri türleri arasında dönüşüm yapma</li>
    <li>Dize biçimlendirme mantığını derinlemesine anlama</li>
    <li>Modüler ve bakımı kolay kod yazma</li>
    <li>C Standart Kütüphanesi'nin iç işleyişini anlama</li>
  </ol>
</blockquote>

## <div align="center">⚡ Performans Değerlendirmesi</div>

<div align="center">
  <table>
    <tr>
      <th>Özellik</th>
      <th>Durum</th>
      <th>Notlar</th>
    </tr>
    <tr>
      <td>İşlevsellik</td>
      <td>✅ Mükemmel</td>
      <td>Tüm temel dönüşümler doğru şekilde destekleniyor</td>
    </tr>
    <tr>
      <td>Bellek Yönetimi</td>
      <td>✅ Mükemmel</td>
      <td>Bellek sızıntısı yok</td>
    </tr>
    <tr>
      <td>Kod Kalitesi</td>
      <td>✅ Çok İyi</td>
      <td>Norminette kurallarına uygun, modüler yapı</td>
    </tr>
    <tr>
      <td>Hata Yönetimi</td>
      <td>✅ İyi</td>
      <td>Temel hata durumları işleniyor</td>
    </tr>
    <tr>
      <td>Performans</td>
      <td>✅ İyi</td>
      <td>Standart printf'e yakın performans</td>
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
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891b2&center=true&vCenter=true&width=500&lines=Bi%C3%A7imlendirme+sadece+g%C3%B6r%C3%BCn%C3%BC%C5%9F+de%C4%9Fildir...;%C4%B0%C3%A7+mekanizmay%C4%B1+anlamak+%C3%B6nemlidir...;Detaylara+dikkat+et...;Standartlara+sad%C4%B1k+kal..." alt="Slogan" />
</div> 