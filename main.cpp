#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <FelgoApplication>
#include <FelgoLiveClient>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    FelgoApplication felgo;

    QQmlApplicationEngine engine;

    // Instead of loading our main.qml file with QQmlApplicationEngine,
    // we start FelgoLiveClient

    felgo.initialize(&engine);
    FelgoLiveClient client (&engine);

    return app.exec();
}
