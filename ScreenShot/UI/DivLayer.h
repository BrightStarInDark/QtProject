/*
* Description: ��ͼ���ֲ�
* Author: ���ӿ��� KaiMing Prince
* Detail: Ĭ���Զ�ʶ�𴰿ڴ�С����ʶ��ͼ��С���ֲ��Ŵ���
* Class�� ToolBar
* Implement: ����ʵ���˽�ͼ��Χȷ�ϵ����ֱ���
*/
#ifndef _DIV_LAYER_H__
#define _DIV_LAYER_H__

#include <QWidget>

class QLabel;

class DivLayer : public QWidget
{
	Q_OBJECT

public:
	DivLayer(QWidget *parent = Q_NULLPTR);
	~DivLayer();

protected:
	virtual void paintEvent(QPaintEvent *event);
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);

private:
	QRect				m_shot_rect;
	QLabel*				m_label;
};
#endif //_DIV_LAYER_H__