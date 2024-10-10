/*

putback: Akıştan okuduğunuz karakteri tekrar aynı sıraya geri koyar. Bir sonraki okuma işlemi bu karakteri yeniden okuyabilir.
peek: Akışın başındaki karaktere bakmanızı sağlar, ancak karakteri akıştan çıkarmaz. Sadece ne olduğuna bakarsınız, bir sonraki okuma yine aynı karakteri alır.



char ch;
std::cin.get(ch);  // Kullanıcının girdiği ilk karakteri alır.



    Bu satırda, std::cin.get() komutu kullanıcıdan (klavyeden) gelen veri akışını 
    temsil eden std::cin akışından ilk karakteri alır ve bu karakteri 
    ch değişkenine atar. Akıştan bir karakter okunduğunda, o karakter artık sıradan çıkarılır ve bir daha okunmaz. 
    Akış, bir nehir gibi düşünülebilir: okuduğunuz veri akıştan geçer ve artık o veriye tekrar ulaşamazsınız (normalde).





➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣

istreamVar.clear();

➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣



➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣➣

                OUTPUT manipülatörleri
            #include <iomanip>

    setw --------->

    endl: bir sonraki satıra geçiş ve buffer temizleme yapar

    cout << setprecision(2);      -----> setprecision() -----> parantez içine yazılan ondalıklı sayının ondalıktan sonra kaç hanesini yazacak

    cout << fixed; ------> sayının düzenli bir şekilde ondalıklı olarak düzenlenmesi sağlanır

    unsetf 

    cout << showpoint ------> showpoint 

    ostreamVar.fill(ch) ------> 

    setfill(ch)

    ostreamVar << left;
    cout << left 
    ostreamVar.unsetf(ios::left);
    ostreamVar << right;

    ostreamVar << right;

    stringler için "getline" kullanımı
        getline(istreamVar, strVar);



*/

#include <iostream>
#include <cctype>  // isdigit fonksiyonu için

int main() {
    char ch;

    // İlk karaktere bakıyoruz (ama onu almıyoruz)
    ch = std::cin.peek();

    // Karakterin rakam olup olmadığını kontrol ediyoruz
    if (isdigit(ch)) {
        std::cout << "İlk karakter bir rakam: " << ch << std::endl;

        // Karakteri okuyoruz ve akıştan çıkarıyoruz
        std::cin.get(ch);

        // Geri akışa koyuyoruz
        std::cin.putback(ch);

        // Aynı karakteri tekrar okuyup ekrana yazdırıyoruz
        std::cin.get(ch);
        std::cout << "Tekrar okunan karakter: " << ch << std::endl;
    } else {
        std::cout << "İlk karakter rakam değil: " << ch << std::endl;
    }

    return 0;
}




