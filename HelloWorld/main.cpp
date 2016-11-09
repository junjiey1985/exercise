#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //QLabel *label = new QLabel("Hello,world");
    //label->show();

    QPushButton button("Quit");
    //QObject::connect(&button,&QPushButton::clicked,&QApplication::quit);
    QObject::connect(&button,&QPushButton::clicked,[](bool){qDebug() << "You clicked me!";});
    button.show();

    return app.exec();
}
