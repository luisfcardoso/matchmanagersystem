#include "userservices.h"
#include "QDebug"

userServices::userServices()
{

}

bool userServices::authenticate(QString cpf, QString password) {
    DBUsers dbuser;
    Users user;
    user = dbuser.getUser(cpf);

    if(user.Getcpf() == nullptr) {
        return false;
    } else {
        if(user.Getpassword() == password) {
            return true;
        }
    }

    return false;

}

QString userServices::deleteUser(QString cpf, QString password) {
    DBUsers dbuser;
    Users user;
    user = dbuser.getUser(cpf);

    if(user.Getcpf() == nullptr) {
        return "Usuário não removido!";
    } else {
        if(user.Getpassword() == password) {
            dbuser.deleteUser(user.Getcpf());

            return "Usuário removido com sucesso!";
        }
    }

    return "Usuário não removido!";
}

QString userServices::addUser(QString cpf, QString password, int privilege, QString cardNumber, QString code, QString expirationMonth, QString expirationYear) {
    if(!(cpf.size() == 11) || !(cpf.contains(QRegularExpression("^[0-9]*$")))) {
        return "O CPF deve conter 11 caracteres e ser composto de apenas números.";
    } else if((password.size()<=6)) {
        return "A senha deve conter 7 ou mais caracteres.";
    } else if(!(cardNumber.size() == 16) || !(cardNumber.contains(QRegularExpression("^[0-9]*$")))) {
        return "O número do cartão deve conter 16 caracteres e ser composto de apenas números.";
    } else if(!(code.size() == 3) || !(code.contains(QRegularExpression("^[0-9]*$")))) {
        return "O código de segurança do cartão deve conter 3 caracteres e ser composto de apenas números.";
    } else if (privilege == 0) {
        return "Escolha o privilégio do usuário.";
    }

    DBUsers dbUser;
    dbUser.insertUser(cpf,password,privilege,cardNumber,code,expirationMonth,expirationYear);

    return "Usuário cadastrado com sucesso!";
}

Users userServices::getUser(QString cpf) {
    DBUsers dbUser;

    return dbUser.getUser(cpf);
}
