/*
* Description: ��ͼ������
* Author: ���ӿ��� KaiMing Prince
* Detail: Ŀǰ�������¹��ܣ���Ӿ��Σ���Ӽ�ͷ�����Ϊ��Ӳ�̣�������ͼ��ȷ�Ͻ�ͼ
* Class�� ToolBar
* Implement: ����ʵ���˽�ͼȷ���˷�Χ֮���������һЩ��ӻ���ȷ�Ϲ���
*/
#ifndef _TOOL_BAR_H__
#define _TOOL_BAR_H__
#include <QWidget>

class ToolBar : public QWidget
{
	Q_OBJECT

public:
	ToolBar(QWidget *parent = Q_NULLPTR);
	~ToolBar();
};
#endif //_TOOL_BAR_H__