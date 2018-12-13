#include <QApplication>
#include <QPushButton>
#include <QFont>

int main(int argc, char *argv[]){
    QApplication app(argc,argv);
    /*Qfont(police,taille en px, epaisseur gras, italic ?)*/
    QFont fonteAlt("Helvetica",10,QFont::Bold,true);
    /*creation d'un widget qui fera office de fenetre*/
    QWidget fenetre;
    QSize sizeWin(300,150);
    fenetre.setFixedSize(sizeWin);

    QPushButton button("Hello world !", &fenetre);
    button.setCursor(Qt::PointingHandCursor);
    button.setFont(fonteAlt);
    button.setToolTip("useless button ...");
    button.setGeometry(60, 50, 180, 70);

    QPushButton another("another", &button);
    another.move(30, 15);

    fenetre.show();

    return app.exec();
}
