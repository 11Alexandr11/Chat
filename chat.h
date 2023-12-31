#pragma once
#include "user.h"
#include "Message.h"
#include "ChatError.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <exception>
#include <limits>
#include <windows.h>

class Chat
{
private:
    std::string _name;                          //��� ����
    std::vector<std::shared_ptr<User>> _users;       //������������ ����
    std::vector<std::shared_ptr<Message>> _messages; //��� ���������
    std::shared_ptr<User> _curentUserName = nullptr;

public:
    Chat(std::string n);
    ~Chat();

    void working();                                         //������ ����
    void createUser();                                      //������� �����
    std::shared_ptr<User> getCurentUserName() const;        //������� ��� ������������
    void chatEntry();                                       //���� � ���
    void workingUser();                                     //������ ���� �� �����
    std::shared_ptr<User> getHavingLogin(const std::string& name) const;//������� ������
    std::shared_ptr<User> getHavingName(const std::string& name) const;//������� �����
    void readMessages();                                    //������ ���������
    void writeMessage();                                    //�������� ���������
    void userInfo();
    void showUserInfo(unsigned int);
    std::vector<std::shared_ptr<User>> users() { return _users; }
};