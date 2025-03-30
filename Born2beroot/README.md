# <div align="center">💻 Born2beroot | 42 İstanbul</div>

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0891b2&height=200&section=header&text=Born2beroot&fontSize=50&fontColor=ffffff&animation=fadeIn&fontAlignY=38" alt="Born2beroot" />
</div>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&duration=2000&pause=500&color=0891B2&center=true&vCenter=true&width=450&lines=Sistem+Y%C3%B6netimi;Sanal+Makine;Linux+Kurulumu;G%C3%BCvenlik+Politikalar%C4%B1;Servis+Yap%C4%B1land%C4%B1rmas%C4%B1" alt="Typing SVG" />
</p>

<div align="center">
  <a href="https://github.com/eabaci42/Born2beroot">
    <img src="https://img.shields.io/badge/GitHub-Born2beroot-181717?style=for-the-badge&logo=github&logoColor=white" />
  </a>
  <a href="https://www.42istanbul.com.tr/">
    <img src="https://img.shields.io/badge/Okul-42%20%C4%B0stanbul-0055FF?style=for-the-badge&logo=42&logoColor=white" />
  </a>
</div>

## <div align="center">💡 Proje Hakkında</div>

<div align="center">
  <img src="https://media.giphy.com/media/3o7qE1YN7aBOFPRw8E/giphy.gif" alt="System Administration" width="300" />
</div>

<p align="center">
  <b>Born2beroot</b>, 42 programlama okulunun sistem yönetimi üzerine odaklanan bir projesidir. Bu projede, bir sanal makine oluşturarak Linux (Debian veya Rocky) işletim sistemi kurulumu, güvenlik yapılandırması, servis yönetimi ve sistem izleme gibi konularda pratik deneyim kazanılır.
</p>

## <div align="center">🎯 Proje Hedefi</div>

<div align="center">
  <table>
    <tr>
      <td>
        <h3>🔄 Temel Görevler</h3>
        <p>Güvenli bir sistem kurulum ve yapılandırması:</p>
        <ul>
          <li>VirtualBox üzerinde sanal bir makine oluşturma</li>
          <li>Debian veya Rocky Linux kurulumu</li>
          <li>LVM (Logical Volume Manager) ile bölüm yönetimi</li>
          <li>SELinux (Rocky) veya AppArmor (Debian) güvenlik modüllerini yapılandırma</li>
          <li>UFW güvenlik duvarı yönetimi</li>
          <li>SSH güvenli uzaktan erişim yapılandırması</li>
          <li>Güçlü parola politikası oluşturma</li>
          <li>Sudo ile ayrıcalıklı erişim yönetimi</li>
          <li>Sistem durumunu izlemek için basit bir script hazırlama</li>
        </ul>
      </td>
      <td>
        <h3>🧠 Ana Zorluklar</h3>
        <ul>
          <li>Komut satırını etkin kullanma</li>
          <li>İşletim sistemi kavramlarını anlama</li>
          <li>Depolama yönetimi (LVM, disk bölümleri)</li>
          <li>Kullanıcı ve grup yönetimi</li>
          <li>Ağ yapılandırması ve güvenliği</li>
          <li>Servis yapılandırması ve yönetimi</li>
          <li>Sistem izleme ve bakım</li>
          <li>Güvenlik politikalarının uygulanması</li>
          <li>Bash script yazımı</li>
        </ul>
      </td>
    </tr>
  </table>
</div>

## <div align="center">⚙️ Sistem Bileşenleri</div>

<div align="center">
  <img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" alt="System Components" width="400" />
</div>

<div align="center">
  <table>
    <tr>
      <th>Bileşen</th>
      <th>Açıklama</th>
    </tr>
    <tr>
      <td>VirtualBox</td>
      <td>Sanal makine oluşturmak için kullanılan sanallaştırma yazılımı</td>
    </tr>
    <tr>
      <td>Debian (veya Rocky Linux)</td>
      <td>Sanal makinede kurulu olan açık kaynaklı Linux işletim sistemi</td>
    </tr>
    <tr>
      <td>LVM</td>
      <td>Disk bölümlerinin esnek yönetimini sağlayan Logical Volume Manager</td>
    </tr>
    <tr>
      <td>AppArmor/SELinux</td>
      <td>İşletim sistemi düzeyinde güvenlik sağlayan koruma modülü</td>
    </tr>
    <tr>
      <td>UFW</td>
      <td>Uncomplicated Firewall - Basit ve etkili bir güvenlik duvarı yapılandırma aracı</td>
    </tr>
    <tr>
      <td>SSH</td>
      <td>Secure Shell - Uzaktan güvenli erişim için ağ protokolü</td>
    </tr>
    <tr>
      <td>Sudo</td>
      <td>Yönetici ayrıcalıklarını güvenli şekilde yönetmeyi sağlayan komut</td>
    </tr>
    <tr>
      <td>Cron</td>
      <td>Zamanlanmış görevleri yönetmek için kullanılan servis</td>
    </tr>
  </table>
</div>

## <div align="center">🔒 Güvenlik Yapılandırmaları</div>

<div align="center">
  <img src="https://media.giphy.com/media/l0HlMldqhsZcg/giphy.gif" alt="Security Configurations" width="400" />
</div>

<p align="center">
  Born2beroot projesi kapsamında uyguladığım güvenlik önlemleri:
</p>

<div align="center">
  <details>
    <summary><b>UFW (Uncomplicated Firewall) Yapılandırması</b></summary>
    <div style="padding: 10px; background-color: #1e1e3f; border-radius: 5px;">
      <p>UFW, Linux sistemlerde iptables kurallarını basitleştiren bir güvenlik duvarı aracıdır.</p>
      <pre><code>
# UFW'yi etkinleştir
sudo ufw enable

# Varsayılan politikaları ayarla
sudo ufw default deny incoming
sudo ufw default allow outgoing

# SSH portunu aç (özel port kullanıldı)
sudo ufw allow 4242/tcp

# UFW durumunu kontrol et
sudo ufw status verbose
      </code></pre>
    </div>
  </details>
  
  <details>
    <summary><b>SSH Güvenli Yapılandırması</b></summary>
    <div style="padding: 10px; background-color: #1e1e3f; border-radius: 5px;">
      <p>SSH, uzaktan güvenli bağlantı sağlamak için kullanılır. Güvenliği artırmak için:</p>
      <pre><code>
# SSH yapılandırma dosyasını düzenle
sudo nano /etc/ssh/sshd_config

# SSH'ı standart olmayan bir porta ayarla
Port 4242

# Root girişini devre dışı bırak
PermitRootLogin no

# Parola kimlik doğrulamasını etkinleştir
PasswordAuthentication yes

# SSH servisini yeniden başlat
sudo systemctl restart ssh
      </code></pre>
    </div>
  </details>
  
  <details>
    <summary><b>Güçlü Parola Politikası</b></summary>
    <div style="padding: 10px; background-color: #1e1e3f; border-radius: 5px;">
      <p>Libpam-pwquality modülü ile güçlü parola politikası uygulandı:</p>
      <pre><code>
# libpam-pwquality paketini yükle
sudo apt install libpam-pwquality

# Parola politikası yapılandırma dosyasını düzenle
sudo nano /etc/pam.d/common-password

# Parolaların en az 10 karakter uzunluğunda olması
# En az bir büyük harf içermesi
# En az bir küçük harf içermesi
# En az bir rakam içermesi
# 3'ten fazla ardışık aynı karakter içermemesi
# Kullanıcı adını içermemesi
# Eski paroladan en az 7 karakter farklı olması
password requisite pam_pwquality.so retry=3 minlen=10 ucredit=-1 lcredit=-1 dcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root
      </code></pre>
    </div>
  </details>
  
  <details>
    <summary><b>Sudo Güvenli Yapılandırması</b></summary>
    <div style="padding: 10px; background-color: #1e1e3f; border-radius: 5px;">
      <p>Sudo kullanımı için güvenlik önlemleri:</p>
      <pre><code>
# Sudo yapılandırma dosyasını oluştur
sudo nano /etc/sudoers.d/sudo_config

# Varsayılan güvenli yol
Defaults secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"

# Sudo ile her komut girişi için şifre sorma
Defaults passwd_tries=3
Defaults badpass_message="Yanlış şifre! Tekrar deneyin."

# Sudo komutlarını loglama
Defaults logfile="/var/log/sudo/sudo.log"
Defaults log_input,log_output
Defaults iolog_dir="/var/log/sudo"

# TTY gereksinimi
Defaults requiretty
      </code></pre>
    </div>
  </details>
</div>

## <div align="center">📊 Sistem İzleme Scripti</div>

<div align="center">
  <img src="https://media.giphy.com/media/3o7qE1YN7aBOFPRw8E/giphy.gif" alt="Monitoring Script" width="300" />
</div>

<p align="center">
  Born2beroot projesi için geliştirdiğim sistem izleme scripti, aşağıdaki bilgileri her 10 dakikada bir yayınlar:
</p>

```bash
#!/bin/bash

# Mimari ve Kernel sürümü
arch=$(uname -a)

# Fiziksel işlemci sayısı
cpu_physical=$(grep "physical id" /proc/cpuinfo | sort | uniq | wc -l)

# Sanal işlemci sayısı
cpu_virtual=$(grep "processor" /proc/cpuinfo | wc -l)

# Kullanılabilir RAM
ram_total=$(free -m | awk '$1 == "Mem:" {print $2}')
ram_used=$(free -m | awk '$1 == "Mem:" {print $3}')
ram_percent=$(free | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

# Disk kullanımı
disk_total=$(df -Bg | grep '^/dev/' | grep -v '/boot$' | awk '{total += $2} END {print total}')
disk_used=$(df -Bm | grep '^/dev/' | grep -v '/boot$' | awk '{used += $3} END {print used}')
disk_percent=$(df -Bm | grep '^/dev/' | grep -v '/boot$' | awk '{used += $3} {total+= $2} END {printf("%.2f"), used/total*100}')

# CPU kullanımı
cpu_load=$(top -bn1 | grep '^%Cpu' | awk '{printf("%.1f%%"), $2 + $4}')

# Son önyükleme zamanı
last_boot=$(who -b | awk '{print $3 " " $4}')

# LVM kullanımı
lvm_use=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo "yes"; else echo "no"; fi)

# Aktif bağlantılar
tcp_connections=$(ss -ta | grep ESTAB | wc -l)

# Kullanıcı sayısı
user_log=$(users | wc -w)

# IP ve MAC adresleri
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

# Sudo ile çalıştırılan komut sayısı
sudo_commands=$(grep "COMMAND" /var/log/sudo/sudo.log | wc -l)

# Ekrana bilgileri yazdır
wall "
    #Architecture: $arch
    #CPU physical: $cpu_physical
    #vCPU: $cpu_virtual
    #Memory Usage: $ram_used/${ram_total}MB ($ram_percent%)
    #Disk Usage: $disk_used/${disk_total}GB ($disk_percent%)
    #CPU load: $cpu_load
    #Last boot: $last_boot
    #LVM use: $lvm_use
    #Connections TCP: $tcp_connections ESTABLISHED
    #User log: $user_log
    #Network: IP $ip ($mac)
    #Sudo: $sudo_commands commands
"
```

## <div align="center">🚀 Bonus Özellikler</div>

<div align="center">
  <table>
    <tr>
      <td width="50%" align="center">
        <h3>🔄 WordPress Sitesi</h3>
        <img src="https://media.giphy.com/media/alEGxmahCCywE/giphy.gif" width="100%" />
        <p><b>"WordPress, PHP ve MariaDB ile tam işlevsel bir web sitesi kurulumu"</b></p>
        <p>WordPress + Lighttpd + MariaDB + PHP (LLMP) yığını kullanarak dinamik bir web sitesi oluşturuldu.</p>
      </td>
      <td width="50%" align="center">
        <h3>🧠 Ek Servisler</h3>
        <img src="https://media.giphy.com/media/USV0ym3bVWQJJmNu3N/giphy.gif" width="100%" />
        <p><b>"Ağ servisleri ve dağıtık sistemler"</b></p>
        <p>FTP sunucusu ve Redis önbellek servisi gibi ek hizmetlerin kurulumu ve yapılandırması gerçekleştirildi.</p>
      </td>
    </tr>
  </table>
</div>

## <div align="center">💻 Sanal Makine Yedekleme</div>

```bash
# Sanal makineyi dışa aktarma (VirtualBox)
VBoxManage export "Born2beroot" -o "Born2beroot.ova"

# Sanal makinenin signature.txt dosyasını oluşturma
shasum -a 256 Born2beroot.vdi > signature.txt
```

## <div align="center">📝 Öğrenilen Dersler</div>

<blockquote align="center" style="background-color: #1e1e3f; padding: 15px; border-radius: 5px; border-left: 5px solid #0891b2; margin-top: 20px;">
  <p>💡 <b>"Sistem yönetimi, kontrolü elinde tutmak ve aynı zamanda bırakmayı bilmektir."</b></p>
  <p><i>Born2beroot projesinde öğrendiklerim:</i></p>
  <ol>
    <li>Linux işletim sisteminin temellerini anlama</li>
    <li>Komut satırı üzerinden sistem yapılandırması ve yönetimi</li>
    <li>Güvenlik politikalarının önemi ve uygulanması</li>
    <li>LVM ile esnek depolama yönetimi</li>
    <li>SSH, UFW ve diğer güvenlik servislerinin yapılandırması</li>
    <li>Bash script yazımı ve otomatikleştirme</li>
    <li>Sistem servislerinin yönetimi ve izlenmesi</li>
  </ol>
</blockquote>

## <div align="center">⚡ Savunma Hazırlığı</div>

<div align="center">
  <img src="https://media.giphy.com/media/USV0ym3bVWQJJmNu3N/giphy.gif" alt="Defense Preparation" width="300" />
</div>

<div align="center">
  <table>
    <tr>
      <th>Hazırlık Soruları</th>
      <th>Açıklama</th>
    </tr>
    <tr>
      <td>Debian vs. Rocky</td>
      <td>İki dağıtım arasındaki farkları ve neden bir tanesini seçtiğinizi açıklayabilmelisiniz</td>
    </tr>
    <tr>
      <td>AppArmor/SELinux</td>
      <td>Bu güvenlik modüllerinin ne işe yaradığını ve nasıl çalıştığını anlamalısınız</td>
    </tr>
    <tr>
      <td>LVM</td>
      <td>LVM'nin ne olduğunu, geleneksel bölümlendirmeden farkını ve avantajlarını açıklayabilmelisiniz</td>
    </tr>
    <tr>
      <td>UFW</td>
      <td>UFW'nin ne olduğunu, nasıl yapılandırıldığını ve kuralların nasıl ekleneceğini bilmelisiniz</td>
    </tr>
    <tr>
      <td>SSH</td>
      <td>SSH'ın ne olduğunu, güvenlik avantajlarını ve yapılandırma adımlarını anlamalısınız</td>
    </tr>
    <tr>
      <td>Sudo</td>
      <td>Sudo'nun amacını, yapılandırmasını ve ayrıcalıklı erişim yönetiminin önemini açıklayabilmelisiniz</td>
    </tr>
    <tr>
      <td>Cron</td>
      <td>Cron'un ne olduğunu, izleme scriptinin nasıl çalıştırıldığını ve zamanlanmış görevlerin nasıl yönetildiğini bilmelisiniz</td>
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
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=2000&pause=500&color=0891b2&center=true&vCenter=true&width=500&lines=Terminal+dostunuzdur...;G%C3%BCvenlik+bir+s%C3%BCre%C3%A7tir%2C+sonu%C3%A7+de%C4%9Fil...;Sistem+y%C3%B6netimi+bir+sanatt%C4%B1r...;Yetki+az%2C+sorumluluk+%C3%A7ok+olmal%C4%B1d%C4%B1r..." alt="Slogan" />
</div> 