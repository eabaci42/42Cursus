# <div align="center">🌐 Net Practice | 42 İstanbul</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=200&section=header&text=Net%20Practice&fontSize=50&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="Net Practice" />
</div>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=A%C4%9F+Temelleri;Alt+A%C4%9Flar;IP+Adresleme;Y%C3%B6nlendirme;TCP%2FIP+Protokolleri" alt="Typing SVG" />
</p>

<div align="center">
  <a href="https://github.com/eabaci42/net_practice">
    <img src="https://img.shields.io/badge/GitHub-Net%20Practice-181717?style=for-the-badge&logo=github&logoColor=white" />
  </a>
  <a href="https://www.42istanbul.com.tr/">
    <img src="https://img.shields.io/badge/Okul-42%20%C4%B0stanbul-0055FF?style=for-the-badge&logo=42&logoColor=white" />
  </a>
</div>

## <div align="center">💡 Proje Hakkında</div>

<div align="center">
  <img src="https://media.giphy.com/media/3o7TKSjRrfIPjeiVyM/giphy.gif" alt="Networking" width="300" />
</div>

<p align="center">
  <b>Net Practice</b>, 42 programlama okulunun ağ temelleri ve IP yapılandırması konusunda pratik yapmaya odaklanan bir projesidir. Bu proje, küçük ağları yapılandırmayı, TCP/IP protokollerinin temellerini anlamayı ve alt ağ (subnet) hesaplamaları gibi ağ yönetimi konularında deneyim kazandırmayı amaçlar.
</p>

## <div align="center">🎯 Proje Hedefi</div>

<div align="center">
  <table>
    <tr>
      <td>
        <h3>🔄 Temel Görev</h3>
        <p>Web tarayıcı üzerinde çalışan bir Javascript uygulamasında, farklı zorluk seviyelerine sahip ağ yapılandırma egzersizlerini çözmek:</p>
        <ul>
          <li>IP adreslerini, alt ağ maskelerini ve yönlendirme tablolarını doğru şekilde yapılandırma</li>
          <li>Ağ cihazları arasında doğru iletişimi sağlama</li>
          <li>Alt ağlar arası trafik yönlendirmeyi anlama</li>
          <li>Geçersiz yapılandırmaları belirleme ve düzeltme</li>
          <li>Ağ topolojisini analiz etme ve gerekli ayarları yapma</li>
        </ul>
      </td>
      <td>
        <h3>🧠 Ana Zorluklar</h3>
        <ul>
          <li>IP adresleme sisteminin anlaşılması</li>
          <li>Alt ağ (subnet) hesaplamaları</li>
          <li>Ağ maskeleri ve CIDR notasyonu</li>
          <li>Yönlendirme tabloları ve kuralları</li>
          <li>Ağ segmentleri arasındaki iletişim</li>
          <li>Switch ve router cihazlarının rol ve fonksiyonları</li>
          <li>Loopback ve özel IP adres aralıkları</li>
        </ul>
      </td>
    </tr>
  </table>
</div>

## <div align="center">📚 Temel Kavramlar</div>

<div align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Networking Concepts" width="400" />
</div>

<div align="center">
  <table>
    <tr>
      <th>Kavram</th>
      <th>Açıklama</th>
    </tr>
    <tr>
      <td>IP Adresi</td>
      <td>Ağ üzerindeki bir cihazı benzersiz şekilde tanımlayan sayısal bir adres (örn. 192.168.1.1)</td>
    </tr>
    <tr>
      <td>Alt Ağ Maskesi</td>
      <td>Bir IP adresinin ağ ve host kısımlarını belirleyen bit maskesi (örn. 255.255.255.0)</td>
    </tr>
    <tr>
      <td>CIDR Notasyonu</td>
      <td>IP adresi ve prefix uzunluğunu gösteren kısa gösterim (örn. 192.168.1.0/24)</td>
    </tr>
    <tr>
      <td>Switch</td>
      <td>Aynı ağ segmentindeki cihazları bağlayan ağ cihazı (Layer 2)</td>
    </tr>
    <tr>
      <td>Router</td>
      <td>Farklı ağ segmentleri arasında trafik yönlendiren ağ cihazı (Layer 3)</td>
    </tr>
    <tr>
      <td>Yönlendirme Tablosu</td>
      <td>Hedef ağlara nasıl ulaşılacağını belirten kurallar dizisi</td>
    </tr>
    <tr>
      <td>Varsayılan Ağ Geçidi</td>
      <td>Yerel ağ dışındaki hedeflere paketleri yönlendiren router adresi</td>
    </tr>
  </table>
</div>

## <div align="center">🔍 Seviyeler ve Çözümler</div>

<div align="center">
  <img src="https://media.giphy.com/media/l0HlMldqhsZcg/giphy.gif" alt="Levels" width="400" />
</div>

<p align="center">
  Net Practice projesi, aşağıdaki seviyeleri içermektedir:
</p>

<div align="center">
  <details>
    <summary><b>Seviye 1 - Basit IP Yapılandırması</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 1" width="300" />
    <p>İki bilgisayar arasında doğrudan bağlantı için temel IP yapılandırması.</p>
    <p>Çözüm: Aynı ağ segmentindeki (örn. 104.97.23.0/24) bilgisayarlara uyumlu IP adresleri atama.</p>
  </details>
  
  <details>
    <summary><b>Seviye 2 - Switch ile Bağlantı</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 2" width="300" />
    <p>Switch üzerinden birden fazla cihazı bağlama.</p>
    <p>Çözüm: Tüm cihazların aynı ağ segmentinde (örn. 192.168.0.0/24) olduğundan emin olma.</p>
  </details>
  
  <details>
    <summary><b>Seviye 3 - Alt Ağ Maskeleri</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 3" width="300" />
    <p>Alt ağ maskeleri ve ağ segmentleri ile çalışma.</p>
    <p>Çözüm: Doğru alt ağ maskelerini (örn. 255.255.255.128 veya /25) kullanarak ağ segmentlerini ayırma.</p>
  </details>
  
  <details>
    <summary><b>Seviye 4 - Özel IP Aralıkları</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 4" width="300" />
    <p>Özel (private) IP adresleme ve ağ yapılandırması.</p>
    <p>Çözüm: Özel IP aralıklarını (10.0.0.0/8, 172.16.0.0/12, 192.168.0.0/16) kullanarak iç ağları yapılandırma.</p>
  </details>
  
  <details>
    <summary><b>Seviye 5 - Router ile Bağlantı</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 5" width="300" />
    <p>Router üzerinden farklı ağ segmentlerini bağlama.</p>
    <p>Çözüm: Her ağ segmenti için doğru router arayüz IP adreslerini yapılandırma.</p>
  </details>
  
  <details>
    <summary><b>Seviye 6 - Yönlendirme Tabloları</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 6" width="300" />
    <p>Statik yönlendirme tabloları ile trafik yönlendirme.</p>
    <p>Çözüm: Doğru hedef ağ ve next-hop adreslerini içeren yönlendirme kuralları oluşturma.</p>
  </details>
  
  <details>
    <summary><b>Seviye 7 - Birden Fazla Router</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 7" width="300" />
    <p>Birden fazla router ile karmaşık ağ topolojisi.</p>
    <p>Çözüm: Her router için doğru yönlendirme tabloları yapılandırarak uçtan uca iletişim sağlama.</p>
  </details>
  
  <details>
    <summary><b>Seviye 8 - Internet Gateway</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 8" width="300" />
    <p>Internet bağlantısı için ağ geçidi yapılandırması.</p>
    <p>Çözüm: Varsayılan yönlendirme (0.0.0.0/0) ve NAT yapılandırmasını anlama.</p>
  </details>
  
  <details>
    <summary><b>Seviye 9 - Karmaşık Topoloji</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 9" width="300" />
    <p>Çok sayıda ağ segmenti ve router içeren karmaşık ağ yapısı.</p>
    <p>Çözüm: Alt ağ planlaması yaparak karmaşık ağların yapılandırılması ve yönetimi.</p>
  </details>
  
  <details>
    <summary><b>Seviye 10 - Zor Yapılandırma</b></summary>
    <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="Level 10" width="300" />
    <p>Tüm önceki seviyelerdeki zorlukları içeren kapsamlı ağ yapılandırması.</p>
    <p>Çözüm: Alt ağ hesaplamaları, yönlendirme ve ağ segmentasyonu konularında kapsamlı bilgileri uygulama.</p>
  </details>
</div>

## <div align="center">💡 Çözüm Stratejileri</div>

<div align="center">
  <table>
    <tr>
      <td width="50%" align="center">
        <h3>🔄 Alt Ağ Hesaplamaları</h3>
        <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" width="100%" />
        <p><b>"Doğru alt ağ maskeleri ile IP adres alanlarını etkili şekilde bölme"</b></p>
        <p>Alt ağ maskesi ve prefix uzunluğu (CIDR) kullanarak, bir IP adres bloğunu kaç alt ağa bölebileceğinizi ve her alt ağda kaç host olacağını hesaplama.</p>
      </td>
      <td width="50%" align="center">
        <h3>🧠 Yönlendirme Mantığı</h3>
        <img src="https://media.giphy.com/media/l0HlMldqhsZcg/giphy.gif" width="100%" />
        <p><b>"En spesifik route kazanır prensibini anlama"</b></p>
        <p>Yönlendirme tablolarında, daha spesifik (daha uzun prefix) kuralların daha genel kurallara göre önceliğe sahip olduğunu anlama ve buna göre yönlendirme tabloları oluşturma.</p>
      </td>
    </tr>
  </table>
</div>

## <div align="center">🚀 Pratik İpuçları</div>

<div align="center">
  <img src="https://media.giphy.com/media/xTiTnwi8Azjnva46Fq/giphy.gif" alt="Tips" width="300" />
</div>

<div align="center">
  <ul>
    <li>✅ Her zaman çalışmaya başlamadan önce ağ topolojisini analiz edin</li>
    <li>✅ IP adresi ve alt ağ maskesinin birbirine uygun olduğundan emin olun</li>
    <li>✅ Aynı alt ağdaki tüm cihazların aynı ağ ID'sine sahip olduğunu doğrulayın</li>
    <li>✅ Farklı alt ağlardaki cihazların iletişimi için router gerektiğini unutmayın</li>
    <li>✅ Her router arayüzünün bağlı olduğu alt ağa ait bir IP adresi olmalıdır</li>
    <li>✅ Yönlendirme tablolarında hedef ağ ve next-hop adreslerinin doğruluğunu kontrol edin</li>
    <li>✅ Varsayılan ağ geçidinin (default gateway) doğru yapılandırıldığından emin olun</li>
    <li>✅ Özel IP adresi aralıklarını (10.0.0.0/8, 172.16.0.0/12, 192.168.0.0/16) tanıyın</li>
  </ul>
</div>

## <div align="center">📝 Öğrenilen Dersler</div>

<blockquote align="center" style="background-color: #1e1e3f; padding: 15px; border-radius: 5px; border-left: 5px solid #0891b2; margin-top: 20px;">
  <p>💡 <b>"Ağ yapılandırması, dijital dünyada iletişimin temelidir."</b></p>
  <p><i>Net Practice projesinde öğrendiklerim:</i></p>
  <ol>
    <li>IP adresleme sisteminin çalışma prensipleri ve alt ağlama</li>
    <li>Ağ cihazlarının (switch, router) rolleri ve yapılandırma mantığı</li>
    <li>Farklı ağ segmentleri arasında trafik yönlendirmeyi anlama</li>
    <li>Yönlendirme tablolarının oluşturulması ve optimizasyonu</li>
    <li>Ağ planlaması ve IP adres alanı yönetimi</li>
  </ol>
</blockquote>

## <div align="center">⚡ Yararlı Kaynaklar</div>

<div align="center">
  <table>
    <tr>
      <th>Kaynak</th>
      <th>Açıklama</th>
    </tr>
    <tr>
      <td>IP Subnet Calculator</td>
      <td>Alt ağ hesaplamaları için çevrimiçi araç <a href="https://www.calculator.net/ip-subnet-calculator.html" target="_blank">[Link]</a></td>
    </tr>
    <tr>
      <td>CIDR Notasyonu</td>
      <td>CIDR gösterimi hakkında kapsamlı bilgi <a href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing" target="_blank">[Link]</a></td>
    </tr>
    <tr>
      <td>Yönlendirme Temelleri</td>
      <td>IP yönlendirme prensipleri <a href="https://www.cloudflare.com/learning/network-layer/what-is-routing/" target="_blank">[Link]</a></td>
    </tr>
    <tr>
      <td>Alt Ağlama Rehberi</td>
      <td>Alt ağlama adım adım rehber <a href="https://www.networkcomputing.com/network-security/ip-subnetting-how-subnet-scratch" target="_blank">[Link]</a></td>
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
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891b2&center=true&vCenter=true&width=500&lines=A%C4%9Flar+birbirine+ba%C4%9Flan%C4%B1r...;IP+adresleri+konu%C5%9Fur...;Alt+a%C4%9Flar+b%C3%B6l%C3%BCn%C3%BCr%2C+router'lar+birle%C5%9Ftirir...;Paketler+yollar%C4%B1n%C4%B1+bulur..." alt="Slogan" />
</div> 