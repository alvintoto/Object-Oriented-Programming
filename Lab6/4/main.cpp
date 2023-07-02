#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QPushButton button;
    button.setText("BUTTON");
    button.setToolTip("A tooltip");

    QFont font ("Courier");
    button.setFont(font);

    QIcon icon ("C:/Users/Alvin/Downloads/CSE 165 Labs/Lab6/4/button.jpg");
    button.setIcon(icon);

    button.show();

    return app.exec();
}
