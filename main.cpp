#include <iostream>
#include "video.h"
#include "pelicula.h"
#include "serie.h"
#include <typeinfo>
using namespace std;
int main() {
    int choice;
    vector<video*> videos;
    videos.push_back(new pelicula(1, "Revenge III", 1.5, "accion", 4.2));
    videos.push_back(new pelicula(2, "Witches get stitches", 2.1, "misterio", 3.2));
    videos.push_back(new pelicula(3, "Aquella vez", 2.3, "drama", 2.2));
    videos.push_back(new serie({1, 2, 3}, {5, 4.3, 4.0}, {"episodio 1", "episodio 2", "episodio 3"}, {1, 2, 3}, 4,
        "Soul Train", 23.0, "misterio", 4.3));
    videos.push_back(new serie({1, 2, 3}, {3.2, 2.9, 5.0},
        {"El Inicio", "Desarrollo", "Conclusión"}, {1, 2, 3}, 5,
        "Sacred Tears", 27.0, "drama", 3.2));
    videos.push_back(new serie({1, 2, 3}, {2.9, 2.2, 2.4}, {"Machine guns", "Crime and punishers", "The gun at the end of the tunnel"}, {1, 2, 3}, 6,
        "Acclimated", 29.0, "accion", 2.5));
    int userInput = -1;
    while (userInput != 0) {
        cout << "\nMENU: " << "\n"
            << "1) Mostrar los videos en general con una cierta calificación o de un cierto género \n"
            << "2) Mostrar los episodios de una determinada serie con una calificacion determinada \n"
            << "3) Mostrar las películas con cierta calificacion \n"
            << "4) Calificar un video \n"
            << "0) Salir" << endl;

        cout << "Opción de usuario: ";
        cin >> userInput;
        cout << endl;
        switch (userInput) {
            case 1:
            cout << "Escoger un género (1. accion, 2. misterio, 3. drama) o calificación(4. 2 o mayor, 5. 3 o mayor 6. 4 o mayor)" << endl;
            cin >> choice;
            if (choice == 1) {
                for (video* vid : videos) {
                    if (vid->getGenre() == "accion") {
                        vid->mostrarVideo();
                    }
                }
            } else if (choice == 2) {
                for (video* vid : videos) {
                    if (vid->getGenre() == "misterio") {
                        vid->mostrarVideo();
                    }
                }
            } else if (choice == 3) {
                for (video* vid : videos) {
                    if (vid->getGenre() == "drama") {
                        vid->mostrarVideo();
                    }
                }
            } else if (choice == 4) {
                for (video* vid : videos) {
                    if (vid->getRatings() >= 2) {
                        vid->mostrarVideo();
                    }
                }
            } else if (choice == 5) {
                for (video* vid : videos) {
                    if (vid->getRatings() >= 3) {
                        vid->mostrarVideo();
                    }
                }
            } else if (choice == 6) {
                for (video* vid : videos) {
                    if (vid->getRatings() >= 4) {
                        vid->mostrarVideo();
                    }
                }
            }
            break;
            case 2:
            cout << "Serie con calificación determinada" << endl;
            cout << "Escoger calificación 1. 2 o mayor, 2. 3 o mayor, 3. 4 o mayor" << endl;
            cin >> choice;
            if (choice == 1) {
                for (video* vid : videos) {
                    if ((vid->getRatings() >= 2.0) && (typeid(*vid).name() == typeid(serie).name())) {
                        vid->mostrarVideo();
                    }
                }
            } else if (choice == 2) {
                for (video* vid : videos) {
                    if (vid->getRatings() >= 3 && typeid(*vid).name() == typeid(serie).name()) {
                        vid->mostrarVideo();
                    }
                }
            } else if (choice == 3) {
                for (video* vid : videos) {
                    if (vid->getRatings() >= 4 && typeid(*vid).name() == typeid(serie).name()) {
                        vid->mostrarVideo();
                    }
                }
            }
            break;
            case 3:
            cout << "Películas con cierta calificación" << endl;
            cout << "Escoger calificación 1. 2 o mayor, 2. 3 o mayor, 3. 4 o mayor" << endl;
            cin >> choice;
                if (choice == 1) {
                for (video* vid : videos) {
                    if (vid->getRatings() >= 2 && typeid(*vid).name() == typeid(pelicula).name()) {
                        vid->mostrarVideo();
                    }
                }
            } else if (choice == 2) {
                for (video* vid : videos) {
                    if (vid->getRatings() >= 3 && typeid(*vid).name() == typeid(pelicula).name()) {
                        vid->mostrarVideo();
                    }
                }
            } else if (choice == 3) {
                for (video* vid : videos) {
                    if (vid->getRatings() >= 4 && typeid(*vid).name() == typeid(pelicula).name()) {
                        vid->mostrarVideo();
                    }
                }
            }
            break;
            case 4:
            cout << "calificar un video, escoge un id" << endl;
            int id;
            cin >> id;
                cout << "Calificación" << endl;
            double personalRating;
            cin >> personalRating;
            videos[id]->setRatings(personalRating);
            videos[id]->mostrarVideo();
            break;
            case 0:
            cout << "Salir del programa." << endl;
            break;
            default:
            cout << "No es una opción" << endl;
        }
    }
    return 0;
}