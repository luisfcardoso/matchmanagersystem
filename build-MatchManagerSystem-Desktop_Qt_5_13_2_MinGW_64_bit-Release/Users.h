#ifndef USERS_H
#define USERS_H


class Users
{
    public:
        Users();
        ~Users();

         int Getid() { return id; }
        void Setid( int val) { id = val; }
        string Getcpf() { return cpf; }
        void Setcpf(string val) { cpf = val; }
        string Getpassword() { return password; }
        void Setpassword(string val) { password = val; }
        int GetprivilegeID() { return privilegeID; }
        void SetprivilegeID(int val) { privilegeID = val; }
        string GetcardNumber() { return cardNumber; }
        void SetcardNumber(string val) { cardNumber = val; }
        string GetsecurityCardNumber() { return securityCardNumber; }
        void SetsecurityCardNumber(string val) { securityCardNumber = val; }
        string GetexpirationCardMonth() { return expirationCardMonth; }
        void SetexpirationCardMonth(string val) { expirationCardMonth = val; }
        string GetexpirationCardYear() { return expirationCardYear; }
        void SetexpirationCardYear(string val) { expirationCardYear = val; }

    protected:

    private:
         int id;
        string cpf;
        string password;
        int privilegeID;
        string cardNumber;
        string securityCardNumber;
        string expirationCardMonth;
        string expirationCardYear;
};

#endif // USERS_H
