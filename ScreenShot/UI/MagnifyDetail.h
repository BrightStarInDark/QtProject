/*
* Description: ��ͼ������
* Author: ���ӿ��� KaiMing Prince
* Detail: �ֲ��Ŵ�ȷ�Ͻ�ͼλ�ã�����ʾ��ǰ����rgbֵ�ͽ�ͼ��Χ
* Class�� MagnifyDetail
* Implement: ����ʵ���˽�ͼ���ֲ̾��Ŵ���������ȷ�Ͻ�����
*/
#ifndef _MAGNIFY_DETAIL_H__
#define _MAGNIFY_DETAIL_H__
#include <QLabel>

class MagnifyDetail : public QLabel
{
	Q_OBJECT

public:
	MagnifyDetail(QWidget *parent = Q_NULLPTR);
	~MagnifyDetail();
};
#endif //_MAGNIFY_DETAIL_H__