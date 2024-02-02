#pragma once

#define �������� unsigned
#define ���������� signed
#define ����� int
#define ����� short
#define ��������� long
#define ����� size_t
#define ��� float
#define �������_��� double

#define �������� bool
#define ������� true
#define ���� false

#define �����_�� void
#define ���_���_����� auto

#define �_����_������� new
#define �_����_�_��� delete
#define �������� malloc
#define ��������_������ calloc
#define ��������_��������� alloca
#define ���������� realloc
#define ����� free
#define ���������_������ nullptr

#define ����� char
#define ����� char*
#define �����_����� '\0'

#define ������ const
#define ������ mutable

#define ���� if
#define ������ else
#define ������� do
#define ������ while
#define ���������� for
#define ���_�� goto

#define ��� break
#define ����� continue
#define ��_������ default
#define ������� return
#define ��_�������� [[nodiscard]]

#define ��������� switch
#define ����_�� case

#define ���_��� ?
#define ���_��� :

#define ������ typedef
#define �� struct
#define �� class
#define ���� union
#define ������ enum
#define ����� typename

#define �������� public
#define ��������� protected
#define ������ private
#define � this
#define �������� friend

#define �����_��_����� try
#define ����_������_�� catch
#define �������� throw
#define ���������� throw

#define ����_����� inline
#define ������ static
#define ��������� constexpr

#define ���������� using
#define ������ namespace

// �� ����� �������� �������� ������� ������� �.�.
#define ������ template

#define ���������� extern

#define ����� main
#define �������� 0
#define ������_�������� 1

#define ѳ����� std

#ifdef _WIN32

#include <Windows.h>
#define ���������_����_����� SetConsoleOutputCP(1251)

#else

#define ���������_����_�����

#endif