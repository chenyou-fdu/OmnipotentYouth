
#ifndef __PROFILE_H
#define __PROFILE_H

#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//#ifdef WINDOWS
#include <io.h>
#include <winsock.h>
//#else
//#include <unistd.h>
//#include <sys/time.h>
//#endif


///Sleep ʹ�õĲ�����һ��������˵����Sleep������Ϊ�����
#ifdef WINDOWS
#define SLEEP_SECONDS(seconds) Sleep((seconds)*1000)
#else
#define SLEEP_SECONDS(seconds) sleep(seconds)
#endif


char *mytrim(char *s);

class TIniFile
{
	//���������
    FILE *fin,*fout;
	//����ָ��section���Ƶ��ַ���ָ��
	char *titlePos( char *buf, int *len );
	//�Ƿ���һ��section�ַ���
	bool isTitleLine( char *bufPtr );
	//�Ƿ���ָ����section
	bool containTitle( char *buf, const char *section );
	//�ƶ��ļ�ָ�뵽��Ӧ��sectionλ��
	bool gotoSection(const char *section );
	//����ָ��entry���Ƶ��ַ���ָ��
	char *textPos( char *buf, const char *entry );
	//ȥ���ַ���ǰ��Ŀո�
	void stripQuotationChar( char *buf );
	//��ȡһ��entry��ֵ
	int readEntry( const char *entry, char *buf, int bufSize, bool strip );
	//дһ��entry


public:
   // ������: TIniFile::ReadTString
   // ����  : �����Ķ�ȡ�����ֶε��ַ������ҹ������ҿո��'\t'
   // ����  : char * 
   // ����  : const char *section
   // ����  : const char *entry
   // ����  : const char *defaultString
   // ����  : char *buffer
   // ����  : int bufLen
   char * ReadTString(const char *section,const char *entry,const char *defaultString,char *buffer,int   bufLen);
   // ������: TIniFile::LRTrim
   // ����  : ��str�н����ҿո��'\t'��ȡ��
   // ����  : char * 
   // ����  : char *str
   static char * LRTrim(char *str);
	//�����ļ�����
	char FileName[128];
	//�������ļ�
	bool Open(char *filename);
	//��ȡһ��int��entry��ֵ
	int ReadInt( const char *section, const char *entry, int defaultInt);
	//��ȡһ��string�͵�entry��ֵ
	int ReadString( const char *section, const char *entry,const char *defaultString, char *buffer,int bufLen);
	//дһ��string�͵�entry��ָ����section��
	//дһ��int�͵�entry��ָ����section��
	//�ر������ļ�
	void Close();

   TIniFile();
	~TIniFile();
private:
	char * FGetS(char *pbuf,int size,FILE *fp);
	void out_close();
	void in_close();
	char * percolate(char *str);
};
#endif