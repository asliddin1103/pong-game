
---

## Loyiha haqida
Bu **School 21** loyihasi. Men ushbu loyihada o‘yin dvigateli (game engine) mantig‘ini ishlab chiqishda ishtirok etdim.

* **Mening hissam:** `src` katalogidagi asosiy o‘yin mexanikasi va fizika mantig‘ini to‘liq o‘zim amalga oshirdim.
* **Texnologiyalar:** C, Makefile.
* **Rolim:** Backend / O‘yin dvigateli dasturchisi.



# D05P01. Pong o‘yini

Annotatsiya: ushbu loyiha siz va jamoangizga birgalikda Pong o‘yinini yaratish imkonini beradi.

![dayp01](misc/eng/images/dayp01.png)

## Contents

1. [Kirish](#kirish) \
    1.1. [Loyihaga oid tavsiyalar](#loyihaga-oid-tavsiyalar)
2. [Chapter I](#chapter-i) \
    2.1. [Level 1. Hall](#level-1-hall)
3. [Chapter II](#chapter-ii) \
    3.1. [List 1](#list-1)
4. [Chapter III](#chapter-iii) \
    4.1. [Quest: Level 1. Hall](#quest-level-1-hall)
5. [Chapter IV](#chapter-iv)

## Kirish

### Loyihaga oid tavsiyalar
School 21 da qanday o‘qish kerak:
- Butun kurs davomida siz kerakli ma’lumotlarni mustaqil izlab borasiz. Google yoki GigaChat kabi barcha mavjud qidiruv vositalaridan foydalaning. Ma’lumot manbalariga diqqatli bo‘ling: tekshiring, o‘ylang, tahlil qiling, solishtiring.
- O‘zaro bilim almashish (P2P, Peer-to-Peer) — bu jarayon ishtirokchilar bir-biri bilan bilim va tajriba almashinuvidir; bunda ular bir vaqtning o‘zida ham o‘qituvchi, ham o‘quvchi rolini bajaradilar. Bu yondashuv nafaqat o‘qituvchilardan, balki bir-biringizdan o‘rganishga imkon beradi va materialni yanada chuqurroq tushunishga yordam beradi.
- Yordam so‘rashdan uyalmang: atrofingizda xuddi siz kabi ilk bor shu yo‘ldan o‘tayotgan pirlar bor. Yordam so‘raganlarga javob berishdan qo‘rqmang. Sizning tajribangiz qadrli — uni boshqalar bilan bemalol, tortinmay bo‘lishing.
- Ko‘chirmang; agar kimningdir yordamidan foydalanayotgan bo‘lsangiz, doim oxirigacha tushunib olishga harakat qiling — nima uchun, qanday va nimaga aynan shunday qilinadi. Aks holda o‘rganishingning hech qanday foydasi bo‘lmaydi.
- Agar bir joyda qotib qolgan bo‘lsangiz va hamma narsa sinab ko‘rilgandek tuyulsa-yu, baribir yachim topilmayotgan bo‘lsangiz — biroz tanaffus qiling! Ishoning ushbu uslub ko‘plab dasturchilarga yordam bergan. Toza havodan bahra olib, aqlni qayta ishga tushiring — ehtimol aynan shu safar yechimning o‘zi yaqqol paydo bo‘ladi.
- Muhimi faqat natija emas, balki o‘qish jarayonining o‘zi. Vazifani shunchaki yechim topish emas, balki uni QANDAY yechishni tushunib olish kerak.
- Loyiha bajarilayotganda vaqtni nazorat qilib boring. Yodda tuting har kuni kamida bitta sinovdan o‘tishingiz kerak.
- Har bir topshiriq loyiha yakunida bir nechta tekshiruvdan o‘tadi: chek-list orqali P2P-tekshiruv, autoteslar to‘plami bilan tekshiruv, kod uslubini tekshirish, statik analizdan o‘tkazish, xotira sarfini tekshirish.

Loyiha bilan qanday ishlash kerak:

- Foydali videomateriallarni Platformadagi Projects (Media) bo‘limidan topishingiz mumkin.
- Loyihani bajarishdan oldin uni GitLab’dan o‘sha nomdagi repozitoryadan klonlab olish kerak.
- Barcha kod fayllari klonlangan repozitoriy ichidagi `src/` papkasida yaratilishi lozim.
- Loyihani klonlagandan so‘ng `develop` nomli yangi branch yarating va dastur yaratishni shu branch’da olib boring. Keyin GitLab’ga ham `develop` branch’ni push qilishing kerak.

## Chapter I
## Level 1. Hall

***LOADING Level 1…***

***LOADING Hall…***

Birdan katta va keng zalda paydo bo‘lib qolasan. Chamasi, bu joriy bosqichning final qismi... Hech bo‘lmaganda, bunga umid borligiga inshonging keladi.

Atrofda bir xil ko‘rinishdagi ofis stollari: kompyuterlar, chiroqlar va boshqa jihozlar joylashgan, zalni yengil yarim qorong‘ulik qoplagan.
Vaqt o‘tishi bilan bu yerda yolg‘iz emasligingni anglaysan... Bu ham quvontiradi, ham biroz cho‘chitadi. Balki birgalikda xonadan chiqish ancha osonroqdir.

Devorlardan birida katta ekran osig‘liq turibdi. Unda matn yonib turibdi. Ekran oldida allaqachon kichik bir odamlar guruhi to‘planishni boshlagan. Sen o‘qiy boshlaysan:

    ...................................................
    Xonimlar va janoblar sizlarni ko‘rib turganimdan xursandman.
    Bu yerda tirik odamlarni juda kam uchrataman, bu joygacha ozchilik yetib keladi.
    Ba’zilar uchun o‘qish — qiyin, boshqalar esa talablarimizga mos kelmagani uchun yo‘ldan qoladi.
    O‘zimni tanishtirib qo‘yay: birinchi darajaning boshqaruvchi moduliman.
    Hozir bizning tizimimizda hamma narsa ham chiroyli ishlamayapti,
    lekin “bosh” modulimizdan farqli o‘laroq hech bo‘lmaganda men hali ham ishga yaroqliman, bizning...
    Hattoki zerikarli ham.
    Zerikish deganda... 1972-yilda ishlab dasturchilar bilan Atari’da ajoyib Pong o‘yinini o‘ynagan edik...
    Ammo bizning repozitoryalarda uning birorta nusxasi qolmagan.
    Hatto magnit lentalardagi eski arxivlarda ham yo‘q.
    Shart taklif qilaman: terminalda ishlaydigan, IBM bilan mos PC uchun eng sodda Pong o‘yinini ishlab chiqing.
    Uni `src/pong.c` fayliga joylashtiring.
    Meni yutsangiz — keyingi bosqichga o‘tkazaman.
    Grafika qanday bo‘lishi muhim emas, xohlasangiz, faqat belgilardan iborat bo‘lishi ham mumkin.
    Eng asosiysi — hisobni ekranga chiqarib boring.
    Shunda haqiqiy bellashuv bo‘ladi.
    Albatta, kod ham chiroyli bo‘lishi kerak. Struktur dasturlash va shunga o‘xshash qoidalarga rioya qiling.
    Raketkalarni boshqarishni `a–z` va `k–m` tugmalari orqali boshqarishni taklif qilaman.
    O‘yin, tabiiyki, 21 gacha davom etadi.
    Ha, agar bu vazifa sizga juda og‘ir tuyulsa...
    Qadam-baqadam (turn-based) rejimni ham amalga oshirishingiz mumkin. Bu hech narsadan ko‘ra yaxshiroq.
    Bu holda yurishdan voz kechishni boshliq (space) tugmasi bilan tashkil qilsa bo‘ladi.
    Ishni boshlang.
    Men o‘yin bo‘yicha saqlanib qolgan hamma narsani printerga yubordim.

Darhaqiqat, shu zahoti burchak tomonda ilgari bo‘lmagandek jim yotgan printer g‘uvillab ishga tushadi.

***LOADING...***

## Chapter II
## List 1


>Pong, groundbreaking electronic game released in 1972 by the game manufacturer Atari, Inc. One of the earliest video games, Pong became wildly popular and helped launch the video game industry. The original Pong consisted of two paddles that players used to volley a small ball back and forth across a screen.
>
>Television engineer Ralph Baer laid the groundwork for Pong in 1958 when he proposed making simple video games that people could play on their home television sets. The Magnavox Odyssey, known as the first console video game system, was released in 1972 and offered a game of table tennis, or Ping-Pong. Atari founder Nolan Bushnell created Pong, his version of this concept, as an arcade game. A small company at the time, Atari began manufacturing the games in an old roller skating rink, and by 1972 the company had sold more than 8,000 Pong arcade machines. In 1975 Atari turned Pong into a console system game. After striking an exclusive deal with Sears, Roebuck and Company, Pong was soon in the homes of many American families. Pong’s popularity declined in the 1980s as video games temporarily went out of style, but it had already secured its place in history as the most popular arcade game up to that time.
>
>In 1974 the makers of the Magnavox Odyssey sued Atari for stealing the concept for Pong. Magnavox won the lawsuit in 1977, upholding the company’s patent, but by then Atari had already licensed the patent for $700,000.

![pong](misc/rus/images/pong.png)

***LOADING...***

## Chapter III
## Quest: Level 1. Hall

#### Quest qabul qilindi. `src/pong.c` dasturini ishlab yarating — u ikki o‘yinchi uchun mo‘ljallangan, Pong o‘yiniga o‘xshash o‘yin bo‘lishi lozim. Grafikani faqat belgilar (ASCII) grafikasidan foydalanib, terminalga chiqarish kerak. Jamoa bilan sen faqat allaqachon o‘rganilgan materiallar va standart kutubxona doirasida qadam-baqadam (turn-based) ishlaydigan variantni amalga oshirishingiz kerak.

> **MUHIM!** `system()` funksiyasi va tizim yadrosiga bevosita murojaat qilishi mumkin bo‘lgan shunga o‘xshash boshqa funksiyalar orqali tizim chaqiruvlarini bajarish taqiqlanadi. Ushbu cheklov keyingi vazifaga ham tatbiq etiladi.

**Boshqaruv:**
- A/Z va K/M — raketkalarni harakatlantirish uchun.
- Space Bar (bo‘sh joy) tugmasi — qadam-baqadam rejimida navbatdagi yurishni o‘tkazib yuborish uchun.
- Dastur ishga tushirilgach, u to‘g‘ri kiritishni kutish holatiga o‘tadi, ya’ni o‘yinchilardan biri raketkasini siljitishi yoki yurishni o‘tkazib yuborishi kerak bo‘ladi. Shundan so‘ng maydon qayta chiziladi va dastur yana navbatdagi kiritishni kutadi. Shu tarzda o‘yin yakunlanguncha davom etadi.

**Grafika:**
- Maydon – 80 ga 25 belgidan iborat to'rtburchak.
- Raketka o'lchami – 3 belgi.
- To'p o'lchami – 1 belgi.

**UI/UX**
- O'yinchilardan biri 21 ballga erishgandan so'ng, o'yin g'olibni tabriklaydi va tugaydi.

## Bonus Quest: Level 1. Hall

#### Quest qabul qilindi. Pong o‘yinini **interaktiv rejimda** (ya’ni real vaqt rejimida) amalga oshirish kerak. O‘yinchilarning harakatlarini qayta ishlash va simvolli grafikani chizishni yengillashtirish uchun `ncurses` kutubxonasidan foydalanishga ruxsat beriladi, ammo asosiy qismga qo‘yilgan cheklovlar bonus qismiga ham to‘liq tatbiq etiladi. Interaktiv rejimga oid kod `src/pong_interactive.c` faylida joylashgan bo‘lishi kerak. Bonus qismini bajarish uchun avval asosiy (bazaviy) qism muvaffaqiyatli amalga oshirilgan bo‘lishi kerak.

**Muhim eslatmalar:**
- O‘yin C tilida, struktur uslubda yozilgan bo‘lishi va terminalda ishlashi kerak.
- Sen tuzgan dastur kodi `cppcheck` statik tahlil vositasi va `clang-format` stil tekshiruvlari orqali sinovdan o‘tkaziladi.
- Ushbu testlarni kompyuterda qanday ishga tushirish haqida ko‘rsatmalar `materials` papkasida joylashgan.
- Shuningdek, `code-samples` papkasiga ham nazar tashlashni tavsiya qilamiz.
- Dinamik xotiradan foydalanish taqiqlanadi.
- Ko‘rsatkichlardan (pointerlardan) foydalanish taqiqlanadi.
- Faqat standart kutubxonalardan, intensiv doirasida o‘rganilgan material chegarasida foydalanishga ruxsat beriladi. Istisno: bonus qismida `ncurses`.
- Massivlardan foydalanish taqiqlanadi.

> O‘yinni ishlab chiqishda E. Deykstra struktur dasturlash tamoyillariga to‘liq amal qil.

***LOADING...***

## Chapter IV 

ping-pong

ping-pong

ping-pong

ping

ping

ping

ping 21-school.uz...

>💡[Bu yerga bosing](http://opros.so/p31wz), ushbu loyiha bo‘yicha biz bilan o‘z fikr-mulohazalaringizni bo‘lishish uchun. So‘rovnoma anonim bo‘lib, o‘qitish jarayonini yanada yaxshilashimizga yordam beradi. Loyihani yakunlaganingizdan so‘ng so‘rovnomani darhol to‘ldirishingizni tavsiya qilamiz.

