#ifndef MAINWINDOW_H
#define MAINWINDOW_H
 
#include <KXmlGuiWindow>

class KTextEdit;
class KJob;
 
class MainWindow : public KXmlGuiWindow
{
    Q_OBJECT
    
  public:
    explicit MainWindow(QWidget *parent = nullptr);
 
  private:
    void setupActions();
 
  private slots:
    void newFile();
    void openFile();
    void saveFile();
    void saveFileAs();
    void saveFileAs(const QString &outputFileName);
    
    void downloadFinished(KJob* job);

    static void doNothingMember() {}

  private:
    KTextEdit* textArea;
    QString fileName;
};
 
#endif