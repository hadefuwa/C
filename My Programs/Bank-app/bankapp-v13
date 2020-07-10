/*
==========================================
 Module: Computers in Engineering - 201910
 Title:  Banking System (Transfers)
 Author: Hamed Adefuwa
 Date:   27 Dec 2019
 Version: 13.3
==========================================
 Overview: Banking system with three main functions;
    1. Creating A User Account
    2. Transactions
    3. Transfers
==========================================
 Detailed Description:
    The program consists of a menu system and three main functions.
    This code is for the Menu & Transfer Function. 
    The remaining two, 'Creating Account' & 'Transactions' are to be developed by other group members.
    The program starts with a main menu for logging in as an existing user or creating a new user.
    Customer details are stored in a .csv file
    The user logs in with an account number and password
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <time.h>

#define CUSTOMERDETAILS "accounts.csv"

char accNumber[50], sortCode[50], firstName[50], lastName[50], dob[12], password[50], balance[50];

char passwordCheck[256];
char createdFileName[50];

struct Payee
{
    char name[50];
    char reference[50];
    char accountNumber[20];
    char sortcode[20];
};

void menu(void);
void existingAccountFunction(void);
int loginFunction();
void transfersFunction(void);

void inputPayee(struct Payee *newpayee);
void printPayee(struct Payee *payee);
void getAccFromFile(char fileName[], char accNumbSearch[]);
void displayAccFromFile(void);
void deleteAccFromFile(char fileName[], char accNumbSearch[]);
void writeAccToFile(char fileName[], char accNumber[], char sortCode[], char firstName[],
                    char lastName[], char dob[], char password[], double accBalance);
void writeTransactionToFile(char accNumber[], char date[], char transactionName[], char transactionAmount[], char transferAccNumber[],
                            char transferSortCode[], char transferRef[], float accBalance);
void createTransactionFolder(char accountNumber[]);
void writePayeeToFile(char accNumber[], char payeeName[], char payeeAccountNumber[], char payeeSortCode[], char payeeRef[]);
void viewPayees(void);
void transferToExistingPayee(void);
void transferNewPayee(void);

void removeNewLine(char msg[]);
int validPayment(double balance, double payment);

void createaccountFunction(void);
void transactionsFunction(void);

int main()
{

#ifdef __linux__
    mkdir("transactions", 777);
    mkdir("payees", 777);
#else
    _mkdir("transactions");
    _mkdir("payees");
#endif
    while (1)
    {
        menu();
    }

    return 0;
}

void menu(void)
{
    printf("Welcome To BHF Banking\n");
    while (1)
    {
        printf("\nMenu\n\n");

        printf("1. Log In\n");
        printf("2. Create Account\n");
        printf("3. Exit\n");

        int choice = 0;
        scanf(" %d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            existingAccountFunction();
            break;
        case 2:
            createaccountFunction();
            break;
        case 3:
            printf("Thank You.\n\n");
            exit(0);
        default:
            printf("\n\aSorry, Try Again.\n\n");
            break;
        }
    }
}

void createaccountFunction()
{
    printf("\n\aThis functionality has not been created yet.\n");
    printf("\nHowever As This Is A Stub Function, We've Created An Account For You, Mr Michael McIntyre");
    printf("\nFeel Free To Log In With Acc Number: 92208512 , Password: Kitty\n");
    writeAccToFile("accounts.csv", "92208512", "404750", "Michael", "McIntyre", "21/02/1976", "Kitty", 9200000.00);
    return;
}

void existingAccountFunction()
{
    int choice = 0;
    int login = loginFunction();

    if (login == true)
    {
        printf("\nWelcome %s\n", firstName);
        displayAccFromFile();

        while (1)
        {
            printf("\nPlease Select One Of The Below Options\n");
            printf("\n1. Transactions\n");
            printf("2. Transfers\n");
            printf("3. Exit\n");
            scanf(" %d", &choice);
            getchar();

            switch (choice)
            {
            case 1:
                transactionsFunction();
                break;
            case 2:
                transfersFunction();
                break;
            case 3:
                printf("\nThank You\n");
                exit(0);
            default:
                printf("\aSorry, Try Again.\n\n");
                break;
            }
        }
    }
    else
    {
        printf("\n\aSorry login details incorrect.\n\n");
    }
}

int loginFunction()
{
    char password[20];

    printf("\nEnter Your Account Number (8 Digits):\n");
    fgets(accNumber, 20, stdin);
    removeNewLine(accNumber);

    printf("\nEnter Password:\n");
    fgets(password, 19, stdin);
    removeNewLine(password);

    getAccFromFile(CUSTOMERDETAILS, accNumber);

    char *passCheck = strstr(passwordCheck, password);
    if (passCheck)
    {
        printf("\nCorrect Password.\n");
        return true;
    }
    else
    {
        printf("\nIncorrect Password.\n");
        return false;
    }
}

void transactionsFunction()
{
    printf("\nThis functionality has not been created yet.\n");
    printf("\nHowever As This Is A Stub Function, We've Created A Transaction For %s To Their Spouse", firstName);
    printf("\nWe Just Need Some Functionality To Read The File & Then This Could Be Displayed\n");

    writeTransactionToFile("87654321", "14/12/2019", "Early Xmas Gift", "249.99", "12345678", "202020", "Wife", 14562.01);
    printf("\nAn Example Of Displayed Transactions\n");
    printf("\nDate %s, Name %s, Amount %s, Acc Number %s, Sort Code %s, Payee Ref %s, Balance %lf\n", "14/12/2019", "Early Xmas Gift", "249.99", "12345678", "202020", "Wife", 14562.01);

    return;
}

void transfersFunction(void)
{
    while (1)
    {
        printf("\n\tTransfers Menu\n");
        printf("\n1. Make Payment To New Payee");
        printf("\n2. Transfer To Existing Payee");
        printf("\n3. View Payees");
        printf("\n4. Exit\n\n");

        int choice = 0;
        scanf(" %d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            transferNewPayee();
            break;
        case 2:
            transferToExistingPayee();
            break;
        case 3:
            viewPayees();
            break;
        case 4:
            return;
            break;
        default:
            printf("Sorry, Try Again.\n\n");
            break;
        }
    }
}

void transferNewPayee(void)
{

    double accBalance;
    sscanf(balance, "%lf", &accBalance);
    printf("\nBalance: %.2lf GBP", accBalance);

    struct Payee Payee1;
    inputPayee(&Payee1);
    printPayee(&Payee1);

    char payment[10];
    printf("Enter Payment Amount:\n");
    fgets(payment, 10, stdin);
    removeNewLine(payment);
    double paymentAmount = 0.00;
    sscanf(payment, "%lf", &paymentAmount);

    accBalance -= validPayment(accBalance, paymentAmount);

    char paymentRef[50];
    printf("Enter Payment Reference:\n");
    fgets(paymentRef, 50, stdin);
    removeNewLine(paymentRef);

    char date[20];
    struct tm *sTm;
    time_t now = time(0);
    sTm = gmtime(&now);
    strftime(date, sizeof(date), "%d/%m/%Y", sTm);

    printf("\nTransfer Confirmed\n");
    printf("New Account Balance: %.2lf\n", accBalance);

    deleteAccFromFile(CUSTOMERDETAILS, accNumber);

    writeAccToFile(CUSTOMERDETAILS, accNumber, sortCode, firstName, lastName, dob, password, accBalance);

    writeTransactionToFile(accNumber, date, paymentRef, payment, Payee1.accountNumber, Payee1.sortcode, Payee1.reference, accBalance);

    writePayeeToFile(accNumber, Payee1.name, Payee1.accountNumber, Payee1.sortcode, Payee1.reference);

    return;
}

int validPayment(double balance, double payment)
{

    while (balance < payment || payment <= 0)
    {
        printf("\nIncorrect Payment Amount, Enter A New Payment Amount:\n");
        scanf("%lf", &payment);
    }
    return payment;
}

void transferToExistingPayee()
{

    viewPayees();

    char userEnteredPayeeAcc[50];

    char paymentRef[50];
    char payment[10];
    double paymentAmount = 0.00;
    double accBalance = 0.00;
    char payeeNameFromFile[50];
    char payeeAccFromFile[50];
    char payeeSortCodeFromFile[50];
    char payeeRefFromFile[50];

    printf("\nEnter Payee Account Number To Search:\n");
    fgets(userEnteredPayeeAcc, 10, stdin);
    removeNewLine(userEnteredPayeeAcc);

    char folder[15] = "payees/";
    char account[15];
    char extension[10] = ".txt";
    char payeefileName[256];

    strcpy(account, accNumber);

    snprintf(payeefileName, sizeof(payeefileName), "%s%s%s", folder, account, extension);

    FILE *fp;
    char lineFromFile[256];
    fp = fopen(payeefileName, "r");
    if (0 == fp)
    {
        printf("\aError No Payees Found. Please Add A Payee To Continue.\n");
        return;
    }

    while (fgets(lineFromFile, 255, fp) != NULL)
    {
        if (strstr(lineFromFile, userEnteredPayeeAcc))
        {

            printf("Payee Found.\n");
            printf("\n%s\n", lineFromFile);

            sscanf(balance, "%lf", &accBalance);

            printf("Enter Payment Amount:\n");
            fgets(payment, 10, stdin);
            removeNewLine(payment);

            sscanf(payment, "%lf", &paymentAmount);

            accBalance -= validPayment(accBalance, paymentAmount);

            printf("Enter Payment Reference:\n");
            fgets(paymentRef, 15, stdin);
            removeNewLine(paymentRef);

            strcpy(payeeNameFromFile, strtok(lineFromFile, ","));
            strcpy(payeeAccFromFile, strtok(NULL, ","));
            strcpy(payeeSortCodeFromFile, strtok(NULL, ","));
            strcpy(payeeRefFromFile, strtok(NULL, ","));
            removeNewLine(payeeRefFromFile);

            printf("\nPayment has been successfully made.");
            printf("\nBalance: %.2lf GBP\n\n", accBalance);

            deleteAccFromFile(CUSTOMERDETAILS, accNumber);

            writeAccToFile(CUSTOMERDETAILS, accNumber, sortCode, firstName, lastName, dob, password, accBalance);

            char date[20];
            struct tm *sTm;
            time_t now = time(0);
            sTm = gmtime(&now);
            strftime(date, sizeof(date), "%d/%m/%Y", sTm);
            removeNewLine(date);

            char folder2[15] = "transactions/";
            char account2[15];
            char extension2[10] = ".txt";
            char fileName2[256];

            strcpy(account2, accNumber);

            snprintf(fileName2, sizeof(fileName2), "%s%s%s", folder2, account2, extension2);

            FILE *filepointer2;
            filepointer2 = fopen(fileName2, "a");

            fprintf(filepointer2, "\nDate %s, Name %s, Amount %s, %s, %s, %s, Balance %.2lf", date, paymentRef, payment, payeeAccFromFile, payeeSortCodeFromFile, payeeRefFromFile, accBalance);

            fclose(filepointer2);

            return;
        }
    }
    printf("\n\aPayee Not Found\n");
    return;
}

void viewPayees(void)
{
    printf("\n\n\t\tCurrent Payees\n");

    char folder[15] = "payees/";
    char account[15];
    char extension[10] = ".txt";
    char fileName[256];

    strcpy(account, accNumber);

    snprintf(fileName, sizeof(fileName), "%s%s%s", folder, account, extension);

    FILE *fp;
    fp = fopen(fileName, "r");
    if (0 == fp)
    {
        printf("\aError No Payees Found. Please Add A Payee To Continue.\n");
        return;
    }

    char line[150];
    int i = 0;

    while (fgets(line, 120, fp))
    {
        printf("%d. %s\n", i, line);
        i++;
    }

    fclose(fp);
}

void inputPayee(struct Payee *newpayee)
{

    puts("\n\n\tPayee Details\n");
    puts("Enter the payees name:");
    fgets(newpayee->name, 50, stdin);
    removeNewLine(newpayee->name);

    puts("Enter the payees reference:");
    fgets(newpayee->reference, 50, stdin);
    removeNewLine(newpayee->reference);

    puts("Enter the payees account number");
    fgets(newpayee->accountNumber, 12, stdin);
    removeNewLine(newpayee->accountNumber);

    puts("Enter the payees sortcode:");
    fgets(newpayee->sortcode, 10, stdin);
    removeNewLine(newpayee->sortcode);
}

void printPayee(struct Payee *payee)
{

    printf("\n\tPayee %s Details\n", payee->name);
    printf("Name: %s\n", payee->name);
    printf("Reference: %s\n", payee->reference);
    printf("AccountNumber: %s\n", payee->accountNumber);
    printf("SortCode: %s\n", payee->sortcode);
    printf("\n");
}

void getAccFromFile(char fileName[], char accNumbSearch[])
{

    FILE *fp = fopen(fileName, "r");
    char line[150];

    if (0 == fp)
    {
        printf("\aAccount not found! Please create a new account.\n");
        return;
    }

    while (fscanf(fp, "%79[^\n]\n", line) == 1)
    {
        if (strstr(line, accNumbSearch))
        {
            break;
        }
    }

    strcpy(passwordCheck, line);

    fclose(fp);

    strcpy(accNumber, strtok(line, ","));
    strcpy(sortCode, strtok(NULL, ","));
    strcpy(firstName, strtok(NULL, ","));
    strcpy(lastName, strtok(NULL, ","));
    strcpy(dob, strtok(NULL, ","));
    strcpy(password, strtok(NULL, ","));
    strcpy(balance, strtok(NULL, ","));
}

void displayAccFromFile(void)
{

    puts("\n\tYour Details\n");
    printf("Account Number: %s\n", accNumber);
    printf("SortCode: %s\n", sortCode);
    printf("First Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);
    printf("Date of Birth: %s\n", dob);
    printf("Balance: %s GBP\n", balance);
}

void deleteAccFromFile(char fileName[], char accNumbDelete[])
{

    FILE *filepointer1, *filepointer2;

    int characterFromFile = 0;
    int temporaryFileLine = 1;
    int lineNumber = 0;
    char lineFromFile[80];

    filepointer1 = fopen(fileName, "r");

    while (fscanf(filepointer1, "%79[^\n]\n", lineFromFile) == 1)
    {
        lineNumber++;
        if (strstr(lineFromFile, accNumbDelete))
        {
            break;
        }
    }

    int deleteLine = lineNumber;

    rewind(filepointer1);

    filepointer2 = fopen("copy.csv", "w");
    while ((characterFromFile = fgetc(filepointer1)) != EOF)
    {
        if (characterFromFile == '\n')
            temporaryFileLine++;

        if (temporaryFileLine != deleteLine)
        {
            putc(characterFromFile, filepointer2);
        }
    }

    fclose(filepointer1);
    fclose(filepointer2);
    remove(fileName);

    rename("copy.csv", fileName);
}

void writeAccToFile(char fileName[], char accNumber[], char sortCode[], char firstName[],
                    char lastName[], char dob[], char password[], double accBalance)
{

    FILE *filepointer = fopen(fileName, "a");
    fprintf(filepointer, "%s,%s,%s,%s,%s,%s,%.2lf\n", accNumber, sortCode, firstName, lastName, dob, password, accBalance);
    fclose(filepointer);
}

void writeTransactionToFile(char accNumber[], char date[], char transactionName[], char transactionAmount[],
                            char transferAccNumber[], char transferSortCode[], char transferRef[],
                            float accBalance)
{
    createTransactionFolder(accNumber);

    FILE *fp;
    fp = fopen(createdFileName, "a");
    if (0 == fp)
    {
        printf("\aError No Transactions Found.\n");
        return;
    }

    fprintf(fp, "\nDate %s,Name %s, Amount %s, Account Number %s, Sortcode %s, Ref %s, New Balance %.2lf", date, transactionName, transactionAmount,
            transferAccNumber, transferSortCode, transferRef, accBalance);
    fclose(fp);
}

void createTransactionFolder(char accountNumber[])
{

    char folder[15] = "transactions/";
    char account[15];
    char extension[10] = ".txt";
    char fileName[256];
    strcpy(account, accountNumber);
    snprintf(fileName, sizeof(fileName), "%s%s%s", folder, account, extension);

    strcpy(createdFileName, fileName);
}

void writePayeeToFile(char accNumber[], char payeeName[], char payeeAccountNumber[],
                      char payeeSortCode[], char payeeRef[])
{

    char folder[15] = "payees/";
    char account[15];
    char extension[10] = ".txt";
    char fileName[256];

    strcpy(account, accNumber);
    snprintf(fileName, sizeof(fileName), "%s%s%s", folder, account, extension);

    FILE *fp;
    fp = fopen(fileName, "a");
    if (0 == fp)
    {
        printf("\aError No Payees Found. Please Add A Payee To Continue.\n");
        return;
    }

    fprintf(fp, "Name %s, Account Number %s, Sortcode %s, Ref %s\n", payeeName, payeeAccountNumber, payeeSortCode, payeeRef);
    fclose(fp);
}

void removeNewLine(char msg[])
{

    msg[strcspn(msg, "\n")] = '\0';
}
