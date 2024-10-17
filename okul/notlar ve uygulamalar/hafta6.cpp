/*

💀 <<     bu şekillerin ismi: extraction operators


💀 Ön tanımlı fonksiyonlar

pow, isLower, abs


    💀 formal parameter:
        int abs(int a){ ---> buradaki a formaldir bir kopyadır yani

        }

    💀 actual parameter:
        abs(y); ---> actual parametre buradaki y'dir yani esas değer budur



    💀 Eğer bir fonksiyonun return yazımı şu şekilde yapıldıysa:

        int fonk(int a, int b){ 
            return a, b;         // Burada dönecek olan değer b'dir çünkü son statement olduğu için
        }

        

        Mesela bir örnek daha: 
        int fonk2(int a, int b){
            
            return 32, 63, 11, 2 * a;     // döndürülecek olan değer  '2*a'

        }


     ⚠️ Değer ve referans parametrelerine çalış
        çalış ki dersi geçesin, adam olasın, mühendis olasın, para kazanasın.....




    int x = 10;

    funOne(x) yolla x'yi
        return x+1
        11 bastı

    funTwo(int& )
        x = x + 10

    parametreye direkt şunu yolla "funOne(x)"
    main'de tekrar x'i bastır bakalım n'olacak?



    ⚠️ Default parametreli fonksiyon

    int ornekFonk(int a, int b, int c = 10, int x = 20, int m = 100){   }


    ⚠️ Arraylere çalış

    ⚠️ const int arraySize = 10;
        constlara hakim ol

    int list[10] = {0};
        10 elemanlı bir listenin tüm elemanlarına 0 yazar

    int list[10] = {8,5,12};       --- ilk 3 elemanı atar geri kalanını 0 yapar

    dizi isimlerini birbirine atayamayız
    dizi1 = dizi2 


    ⚠️ diziler, fonksiyonlara referansla gönderilir, değer olarak gönderilmiyor


    void initializer(int arr[5])
    void initializer(int arr[])
        İkisi de mümkün.

    void example(int x[], const int y[])
        const ile başlatılmış bir dizi
        x'in boyutu değişebilir, y'nin değişemez
         
*/