# <div align="center">🔄 Push Swap | 42 İstanbul</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=200&section=header&text=Push%20Swap&fontSize=50&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="Push Swap" />
</div>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=S%C4%B1ralama+Algoritmas%C4%B1;Y%C4%B1%C4%9F%C4%B1n+Veri+Yap%C4%B1s%C4%B1;Verimli+Kod;K%C4%B1s%C4%B1tl%C4%B1+Operasyon;Optimizasyon" alt="Typing SVG" />
</p>

<div align="center">
  <a href="https://github.com/eabaci42/Push-swap">
    <img src="https://img.shields.io/badge/GitHub-Push%20Swap-181717?style=for-the-badge&logo=github&logoColor=white" />
  </a>
  <a href="https://www.42istanbul.com.tr/">
    <img src="https://img.shields.io/badge/Okul-42%20%C4%B0stanbul-0055FF?style=for-the-badge&logo=42&logoColor=white" />
  </a>
</div>

## <div align="center">💡 Proje Hakkında</div>

<div align="center">
  <img src="https://media.giphy.com/media/l0HlMldqhsZcg/giphy.gif" alt="Sorting Algorithm" width="300" />
</div>

<p align="center">
  <b>Push Swap</b>, 42 programlama okulunun algoritma verimliliği ve yığın (stack) veri yapısı üzerine odaklanan bir projesidir. Bu projede, belirli bir kurallar dizisi kullanarak, en az sayıda hamle ile bir tam sayı dizisini sıralayan bir program geliştirilir.
</p>

## <div align="center">🎯 Proje Hedefi</div>

<div align="center">
  <table>
    <tr>
      <td>
        <h3>🔄 Sıralama Görevi</h3>
        <p>İki yığın (A ve B) ve aşağıdaki kısıtlı operasyonlar kullanarak, A yığınını küçükten büyüğe sıralayın:</p>
        <ul>
          <li><code>sa</code> - swap a: A yığınının üstündeki ilk iki elemanı değiştirir</li>
          <li><code>sb</code> - swap b: B yığınının üstündeki ilk iki elemanı değiştirir</li>
          <li><code>ss</code> - sa ve sb'yi aynı anda yapar</li>
          <li><code>pa</code> - push a: B'nin en üstündeki elemanı A'nın üstüne taşır</li>
          <li><code>pb</code> - push b: A'nın en üstündeki elemanı B'nin üstüne taşır</li>
          <li><code>ra</code> - rotate a: A'daki tüm elemanları yukarı kaydırır (ilk eleman son olur)</li>
          <li><code>rb</code> - rotate b: B'deki tüm elemanları yukarı kaydırır (ilk eleman son olur)</li>
          <li><code>rr</code> - ra ve rb'yi aynı anda yapar</li>
          <li><code>rra</code> - reverse rotate a: A'daki tüm elemanları aşağı kaydırır (son eleman ilk olur)</li>
          <li><code>rrb</code> - reverse rotate b: B'daki tüm elemanları aşağı kaydırır (son eleman ilk olur)</li>
          <li><code>rrr</code> - rra ve rrb'yi aynı anda yapar</li>
        </ul>
      </td>
      <td>
        <h3>🧠 Ana Zorluklar</h3>
        <ul>
          <li>Kısıtlı operasyonlar ile sıralama mantığı geliştirmek</li>
          <li>En az hamle sayısı ile sıralamayı başarmak</li>
          <li>Farklı veri kümeleri için verimli çalışacak algoritma tasarlamak</li>
          <li>Yığın veri yapısını etkili şekilde kullanmak</li>
          <li>Büyük veri kümeleri için kabul edilebilir performans sağlamak</li>
          <li>Algoritma karmaşıklığını ve alan kullanımını optimize etmek</li>
        </ul>
      </td>
    </tr>
  </table>
</div>

## <div align="center">⚙️ Algoritma ve Yaklaşım</div>

<div align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Algorithm" width="400" />
</div>

<p align="center">
  Push Swap projesi için geliştirdiğim ana algoritma, pivot temelli bir sıralama stratejisini kullanır:
</p>

<div align="center">
  <table>
    <tr>
      <th>Adım</th>
      <th>Açıklama</th>
    </tr>
    <tr>
      <td>1. Küçük Durum Optimizasyonu</td>
      <td>2, 3 veya 5 eleman için özel ve optimize edilmiş sıralama algoritmaları</td>
    </tr>
    <tr>
      <td>2. Pivot Seçimi</td>
      <td>Ortalama veya medyan temelli pivot elemanı seçimi</td>
    </tr>
    <tr>
      <td>3. Bölme (Partition)</td>
      <td>A yığınındaki elemanları pivota göre B yığınına bölme</td>
    </tr>
    <tr>
      <td>4. Özyinelemeli Sıralama</td>
      <td>Hem A hem de B yığınlarındaki alt gruplar için özyinelemeli sıralama</td>
    </tr>
    <tr>
      <td>5. Birleştirme</td>
      <td>Sıralanmış alt grupları uygun şekilde birleştirme</td>
    </tr>
    <tr>
      <td>6. Hamle Optimizasyonu</td>
      <td>Gereksiz hamleleri azaltmak için optimizasyon teknikleri</td>
    </tr>
  </table>
</div>

## <div align="center">🔍 Algoritma Karmaşıklığı</div>

<div align="center">
  <img src="https://media.giphy.com/media/3o7TKSjRrfIPjeiVyM/giphy.gif" alt="Complexity" width="300" />
</div>

<div align="center">
  <table>
    <tr>
      <th>Eleman Sayısı</th>
      <th>Ortalama Hamle Sayısı</th>
      <th>Karmaşıklık</th>
    </tr>
    <tr>
      <td>3</td>
      <td>≤ 3</td>
      <td>O(1)</td>
    </tr>
    <tr>
      <td>5</td>
      <td>≤ 12</td>
      <td>O(1)</td>
    </tr>
    <tr>
      <td>100</td>
      <td>~700</td>
      <td>O(n log n)</td>
    </tr>
    <tr>
      <td>500</td>
      <td>~4500</td>
      <td>O(n log n)</td>
    </tr>
  </table>
</div>

<p align="center">
  Algoritmanın genel karmaşıklık analizi:
</p>

<div align="center">
  <ul>
    <li>Zaman Karmaşıklığı: O(n log n)</li>
    <li>Alan Karmaşıklığı: O(n)</li>
    <li>Hamle Sayısı: Yaklaşık 0.05 × n × log₂(n)</li>
  </ul>
</div>

## <div align="center">💻 Kod Yapısı</div>

<div align="center">
  <img src="https://media.giphy.com/media/a8DfVAblirrOg/giphy.gif" alt="Code Structure" width="400" />
</div>

```c
// Ana program yapısı (basitleştirilmiş)
int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int     *numbers;
    int     count;
    
    // Argümanları analiz et ve sayıları al
    numbers = parse_arguments(argc, argv, &count);
    
    // Sayıları kontrol et (tekrar, geçerlilik, sınırlar)
    if (!check_numbers(numbers, count))
        return (error_handler("Geçersiz sayılar"));
    
    // Yığını başlat
    stack_a = initialize_stack(numbers, count);
    stack_b = NULL;
    
    // Zaten sıralıysa işlem yapma
    if (is_sorted(stack_a))
        return (0);
    
    // Eleman sayısına göre en uygun algoritma ile sırala
    if (count <= 3)
        sort_three(&stack_a);
    else if (count <= 5)
        sort_five(&stack_a, &stack_b);
    else
        sort_large(&stack_a, &stack_b, count);
    
    // Belleği temizle ve çık
    free_stacks(stack_a, stack_b);
    free(numbers);
    return (0);
}
```

## <div align="center">🚀 Performans Optimizasyonları</div>

<div align="center">
  <table>
    <tr>
      <td width="50%" align="center">
        <h3>🔄 Hamle Azaltma Teknikleri</h3>
        <img src="https://media.giphy.com/media/fUwOs80ja3sTPpjndh/giphy.gif" width="100%" />
        <p><b>"Akıllı pivot seçimi ve grup sıralama ile hamle sayısını minimum tutma"</b></p>
        <p>Pivot seçiminde medyan kullanarak, öğeleri daha dengeli bir şekilde bölme ve toplam hamle sayısını azaltma.</p>
      </td>
      <td width="50%" align="center">
        <h3>🧠 Kombinasyon Hamleler</h3>
        <img src="https://media.giphy.com/media/3oEjI6SIIHBdRxXI40/giphy.gif" width="100%" />
        <p><b>"Çift hamleleri (ss, rr, rrr) kullanarak operasyon sayısını azaltma"</b></p>
        <p>Her iki yığında da aynı anda çalışarak işlem verimliliğini artırma ve toplam hamle sayısını düşürme.</p>
      </td>
    </tr>
  </table>
</div>

## <div align="center">📊 Karşılaştırmalı Sonuçlar</div>

<div align="center">
  <img src="https://media.giphy.com/media/RbDKaczqWovIugyJmW/giphy.gif" alt="Comparative Results" width="300" />
</div>

<p align="center">
  Farklı algoritmaları ve yaklaşımları test ettiğimde elde ettiğim hamle sayıları:
</p>

<div align="center">
  <table>
    <tr>
      <th>Algoritma / Yaklaşım</th>
      <th>100 Eleman</th>
      <th>500 Eleman</th>
    </tr>
    <tr>
      <td>Basit Pivot (Ortalama)</td>
      <td>850-950</td>
      <td>6000-7000</td>
    </tr>
    <tr>
      <td>Gelişmiş Pivot (Medyan)</td>
      <td>700-800</td>
      <td>4500-5500</td>
    </tr>
    <tr>
      <td>Chunk Temelli Yaklaşım</td>
      <td>700-800</td>
      <td>5000-6000</td>
    </tr>
    <tr>
      <td>Benim Yaklaşımım (Optimize)</td>
      <td>~685</td>
      <td>~4300</td>
    </tr>
  </table>
</div>

## <div align="center">💻 Kullanım</div>

```bash
# Projeyi derle
make

# Programı çalıştır (örnek sayılarla)
./push_swap 5 2 9 1 3 6

# Hamle sayısını görmek için
./push_swap 5 2 9 1 3 6 | wc -l

# Checker ile doğrulama (Linux)
ARG="5 2 9 1 3 6"; ./push_swap $ARG | ./checker_linux $ARG

# Checker ile doğrulama (Mac)
ARG="5 2 9 1 3 6"; ./push_swap $ARG | ./checker_Mac $ARG
```

## <div align="center">🧪 Test ve Değerlendirme</div>

<div align="center">
  <img src="https://media.giphy.com/media/LMt9638dO8dftAjtco/giphy.gif" alt="Testing" width="200" />
</div>

<p align="center">
  Push Swap projesini farklı veri setleri ve boyutlarıyla test ettim:
</p>

<div align="center">
  <ul>
    <li>✅ Sıralı diziler</li>
    <li>✅ Ters sıralı diziler</li>
    <li>✅ Rastgele 3, 5, 100 ve 500 elemanlı diziler</li>
    <li>✅ Tekrar eden sayılar kontrolü</li>
    <li>✅ INT_MIN ve INT_MAX sınır değerleri</li>
    <li>✅ Negatif ve pozitif sayıların karışık olduğu diziler</li>
    <li>✅ Checker programı ile doğruluk kontrolü</li>
  </ul>
</div>

## <div align="center">📝 Öğrenilen Dersler</div>

<blockquote align="center" style="background-color: #1e1e3f; padding: 15px; border-radius: 5px; border-left: 5px solid #0891b2; margin-top: 20px;">
  <p>💡 <b>"Algoritma verimliliği ve optimizasyon, bir problemin çözümü kadar önemlidir."</b></p>
  <p><i>Push Swap projesinde öğrendiklerim:</i></p>
  <ol>
    <li>Algoritma karmaşıklığını anlama ve analiz etme</li>
    <li>Yığın (stack) veri yapısının etkili kullanımı</li>
    <li>Farklı sıralama stratejilerinin karşılaştırmalı analizi</li>
    <li>Kısıtlı operasyonlar altında problem çözme</li>
    <li>Hamle optimizasyonu ve performans iyileştirme</li>
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
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891b2&center=true&vCenter=true&width=500&lines=Az+hamle%2C+%C3%A7ok+i%C5%9F...;Algoritma+verimlili%C4%9Fi+her+%C5%9Feydir...;K%C4%B1s%C4%B1tlar+yarat%C4%B1c%C4%B1l%C4%B1%C4%9F%C4%B1+art%C4%B1r%C4%B1r...;Optimize+et%2C+rafine+et%2C+m%C3%BCkemmelle%C5%9Ftir..." alt="Slogan" />
</div> 