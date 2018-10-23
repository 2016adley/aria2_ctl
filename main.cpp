#include "ariang.h"
#include <QtWidgets/QApplication>
#include <QLibraryInfo>
#include <QtQuick/QQuickView>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
	/*
	���ֱ���ʹ���Կ��ķ�ʽ
	��δ����

	AA_UseOpenGLES  ͼ�λ���ת���DX����
	AA_UseSoftwareOpenGL ���
	AA_UseDesktopOpenGL  Ԥ�õ�����ʵ�ַ�ʽ
	*/

	//������windowsƽ̨�������ó�ת��dxʵ��
	QCoreApplication::setAttribute(Qt::AA_UseOpenGLES);

	QApplication a(argc, argv);

    /*
    ��������Ŀ¼
    ��QApplication  ��ʼ�����������
    ���������� �ļ��е�һ��Ŀ¼(exe/../)
    */
    QString first_dir = QCoreApplication::applicationDirPath().append("/../");

    QDir::setCurrent(first_dir);

    ariang w;
	w.show();
	return a.exec();
}
