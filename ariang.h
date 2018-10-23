#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ariang.h"
#include "windows.h"
#include <QFileInfo>
#include <QSystemTrayIcon>

class ariang : public QMainWindow
{
	Q_OBJECT

public:
	ariang(QWidget *parent = Q_NULLPTR);

	////��Ӧ ���ڴ�С�ı�
	//void resizeEvent(QResizeEvent *);
	//
	////��Ӧ ��С����Ϣ
	//void hideEvent(QHideEvent *event);

private slots:
	
    //��Ӧ���̵���Ĳ���
	void iconActivated(QSystemTrayIcon::ActivationReason reason);
    
    //��Ӧ�ر��¼�
    void closeEvent(QCloseEvent *event);
    
    //��Ӧ ���ڴ�С�ı�
    void resizeEvent(QResizeEvent *);

    //��Ӧ ��С����Ϣ
    void hideEvent(QHideEvent *event);

private:
	Ui::ariangClass ui;

	//����ͼ���ָ��
	QSystemTrayIcon *trayIcon=NULL;
    
    //���� ariacmd
    void start_aria_cmd();

    //aria_cmd ����Ϣ
    PROCESS_INFORMATION pi;


};
