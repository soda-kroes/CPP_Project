// SODDA______Start[PROJECT] [05-07-2021]
// Username "soda"
// Password "12345"



#include<fstream>
#include<iomanip>
#include<string.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class Student{
private:
    int id;
    char name[20];
    char sex[7];
    char dob[20];
    char room[20];
    float s1,s2,s3,s4,s5;
    double avg,total;
    char grade;
    char result[10];
public:
	Student(){
		id=0;
		strcpy(name,"NULL");
		strcpy(sex,"NULL");
		strcpy(dob,"NULL");
		strcpy(room,"NULL");
		s1=0;
		s2=0;
		s3=0;
		s4-0;
		s5=0;
		avg=0;
		total=0;

	}
	Student(int id,char name[20],char sex[7],char dob[20],char room[20],float s1,float s2,float s3,float s4,float s5,double total,
	double avg,char grade,char result[10]){
		this->id=id;
		strcpy(this->name,name);
		strcpy(this->sex,sex);
		strcpy(this->dob,dob);
		strcpy(this->room,room);
		this->s1=s1;
		this->s2=s2;
		this->s3=s3;
		this->s4=s4;
		this->s5=s5;
		this->total=total;
		this->avg=avg;

	}
	Student(const Student &other){
		id=other.id;
		strcpy(name,other.name);
		strcpy(sex,other.sex);
		strcpy(dob,other.dob);
		strcpy(room,other.room);
		s1=other.s1;
		s2=other.s2;
		s3=other.s3;
		s4=other.s4;
		s5=other.s5;
		total=other.total;
		avg=other.avg;

	}
    
    int getID(){
	return id;
	}
    char* getName(){
	return name;
	}
    char getSex(){
	return* sex;
	}
	
    void input();
    void outputscore();
    void outputinformation();

};


void Login()
{
	
	system("cls ");
	system("color d");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############  [STUDENT MANANGERMENT SYSTEM PROJECT WITH C++]   ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
   



	char ch;
	string uname;
	string pass;
		int z;
	
    
    printf("\n\n");
    printf("\n\t\t\t    **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LOGING                    =");
    printf("\n\t\t\t        =                  PAGE                     =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\t\t\t   **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    cout<<"\n\n\t\t\t                       **********\n";
    cout<<"\t\t\t                       * Login  *\n";
    cout<<"\t\t\t                       **********\n";
    	
    cout<<"\n\t\t\t\t => Please Enter Username: ";
	cin>>uname;
	
	cout<<"\n\t\t\t         => Please Input Password: ";
	ch=getch();
	while(ch!=13){
		pass.push_back(ch);
		cout<<'x';
		ch=getch();
	}
	if(uname=="soda"){
		if(pass=="12345"){
			cout<<"\n\n\n\t\t\t      ======>>> Login Successful <<<========"<<endl;
			
		}
		else{
			cout<<"\n\n\t\t\t\aInvalid Password ! Please Try Again.......^_^ !"<<endl;
			exit(0);	
			
		}
	}
	else{
		cout<<"\n\n\t\t\t\aInvalid Username ! Please Try Again.......^_^ !"<<endl;
		exit(0);
	}
	
    printf("\n\n\t\t\t=>>    Please Enter any key to continue.....");
    getch();
}




char pass[10]={"bep"};
int i,j,k,l,m,n,p,d;
FILE *fptr;
void gotoxy (int x, int y)
{
COORD coord = { 0 ,0 };
coord.X = x; coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void credit()
{
	int z;
	system("color 6");
	system("cls");
char d[40] = "      WELCOME TO MY PROJECT  ";
int i,j,k,l,m;
gotoxy(20,5);
for(j=0;j<40;j++)
{
Sleep(10);
printf("\xb2");
}
gotoxy(20,5);printf("\xB2");
Sleep(20);
gotoxy(20,6);printf("\xB2");
Sleep(20);
gotoxy(20,7);printf("\xB2");
Sleep(20);
gotoxy(20,8);printf("\xB2");
gotoxy(20,9);printf("\xB2");
Sleep(20);
gotoxy(20,10);printf("\xB2");
Sleep(20);
gotoxy(20,11);printf("\xB2");
Sleep(20);
gotoxy(20,12);printf("\xB2");
gotoxy(20,13);printf("\xB2");
Sleep(20);
gotoxy(20,14);printf("\xB2");
Sleep(20);
gotoxy(20,15);printf("\xB2");
Sleep(20);
gotoxy(20,16);printf("\xB2");
gotoxy(20,17);printf("\xB2");
Sleep(20);
gotoxy(20,18);printf("\xB2");
Sleep(20);
gotoxy(20,19);printf("\xB2");
Sleep(20);
gotoxy(20,20);printf("\xB2");
 
gotoxy(60,5);printf("\xB2");
Sleep(20);
gotoxy(60,6);printf("\xB2");
Sleep(20);
gotoxy(60,7);printf("\xB2");
Sleep(20);
gotoxy(60,8);printf("\xB2");
Sleep(20);
gotoxy(60,9);printf("\xB2");
gotoxy(60,9);printf("\xB2");
Sleep(20);
gotoxy(60,10);printf("\xB2");
Sleep(20);
gotoxy(60,11);printf("\xB2");
Sleep(20);
gotoxy(60,12);printf("\xB2");
Sleep(20);
gotoxy(60,13);printf("\xB2");
Sleep(20);
gotoxy(60,14);printf("\xB2");
Sleep(20);
gotoxy(60,15);printf("\xB2");
Sleep(20);
gotoxy(60,16);printf("\xB2");
Sleep(20);
gotoxy(60,17);printf("\xB2");
Sleep(20);
gotoxy(60,18);printf("\xB2");
Sleep(20);
gotoxy(60,19);printf("\xB2");
Sleep(20);
gotoxy(60,20);printf("\xB2");
 
gotoxy(20,20);
for(j=0;j<40;j++)
{
Sleep(20);
printf("\xb2");
}
 
gotoxy(20,9);
for(j=0;j<40;j++)
{
Sleep(20);
printf("\xb2");
}
 
gotoxy(21,7);
printf("\t ");
for(m=0;m<30;m++)
{
Sleep(50);
printf("%c",d[m]);
}
 
gotoxy(23,11);
printf("\t \xdb\xdb\xdb\xb2 CREATE BY  :  KROES SODA ");
gotoxy(23,14);
printf("\t \xdb\xdb\xdb\xb2 INSTRUCTOR :  MR.MENGSONG ");
gotoxy(23,17);
printf("\t \xdb\xdb\xdb\xb2 STUDY AT   :  ETEC CENTER  ");
 
char n;
gotoxy(21,22);
	cout<<"\n\n\n\t\t => Please Press any Number and 'Enter' to Continue: ";
	cin>>z;

}




void welcome()
   {
     system("cls");
     system("color 4");
     int k;
	 cout<<"\t%%      %%      ";
       cout<<"\n\t%%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%  %%%% %%%%%%%";
       cout<<"\n\t%%      %% %%      %%      %%      %%  %% %%  %%% %% %%       ";
       cout<<"\n\t%%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%      ";
       cout<<"\n\t%%  %%  %% %%      %%      %%      %%  %% %%      %% %%           ";
       cout<<"\n\t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%     ";
       cout<<"\n\n\t\t\t        $$$$$$$$  $$$$$";
       cout<<"\n\t\t\t           $$     $   $";
       cout<<"\n\t\t\t           $$     $$$$$";
       cout<<"\n"<<endl;
       cout<<"\t $$$$$$$$  $$$$$$$  $$$$$$$$  $$$$$$$     $$$$$$$  $$$$$$$$  $$       $$   $$$$$$$  $$$$$$$$  $$";
       cout<<"\n\t $$          $$     $$        $$          $$       $$        $$ $$    $$     $$     $$        $$  $$$";
       cout<<"\n\t $$$$$$      $$     $$$$$     $$          $$       $$$$$     $$  $$   $$     $$     $$$$$     $$$$";
       cout<<"\n\t $$          $$     $$        $$          $$       $$        $$   $$  $$     $$     $$        $$";
       cout<<"\n\t $$$$$$$$    $$     $$$$$$$$  $$$$$$$$    $$$$$$$$ $$$$$$$$  $$    $$ $$     $$     $$$$$$$$  $$";
       cout<<" \n\n\n\t\t     =>    press any number and 'ENTER' to continue: ";
	   cin>>k;
       getch();
       
	}
	void loading(){
		cout<<"\n\t     <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<(^_^)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
		cout<<"\n\t     <<                                                                                 >>";
		cout<<"\n\t     <<<                                                                               >>>";
		cout<<"\n\t     <<<<                  STUDENT MANANGERMENT SYSTEM PROJECT WITH C++               >>>>";
		cout<<"\n\t     <<<                                                                               >>>";
		cout<<"\n\t     <<                                                                                 >>";
		cout<<"\n\t     <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<(^_^)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
		cout<<"\n\t     |                                                                                   |";
		cout<<"\n\t     |                                                                                   |";
		cout<<"\n\t     *                             WELLCOME TO MY PROJECT                                *";
		cout<<"\n\t     |                                                                                   |";
		cout<<"\n\t     |                                                                                   |";
		cout<<"\n\t     <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<(^_^)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
		cout<<"\n\n\n\t                              TEACH BY : << MR.LOR MENGSONG >>                  ";
		system("color 1");
		cout<<"\n\n\n\t\t     Loading ";
		char x =219;
		for(int i=0;i<=60;i++){
		Sleep(100);
		cout<<x;
	
	}
}
	
	
		
char studentGrade(float avg);
char* studentResult(float avg);
void Student::input(){
    cout<<"\t\t\t =>\t Please Input Student ID   : ";
	cin>>id;
    cout<<"\t\t\t =>\t Please Input Student Name : ";
    cin.ignore();
    cin.getline(name,20);
    cout<<"\t\t\t =>\t Please Input Student Sex  : "; 
	cin>>sex;
	cin.ignore();
    cout<<"\t\t\t =>\t Please Input Dateofbirth  : ";
    cin.ignore();
    cin>>dob;
    cout<<"\t\t\t =>\t Please Input Classroom    : ";
    cin>>room;
    cout<<"\t\t\t  =========> START INPUT SCORE <========="<<endl;
    cout<<"\t\t\t =>\t Please Enter Java         : "; 
	cin>>s1;
    cout<<"\t\t\t =>\t Please Enter C#           : ";
	 cin>>s2;
    cout<<"\t\t\t =>\t Please Enter Kotlin       : "; 
	cin>>s3;
    cout<<"\t\t\t =>\t Please Enter Swift        : "; 
	cin>>s4;
	cout<<"\t\t\t =>\t Please Enter Flutter      : ";
	cin>>s5;

    total = s1+s2+s3+s4+s5;
    avg = total/5.0;
    grade = studentGrade(avg);
   
    strcpy(result,studentResult(avg));

}



void Student::outputinformation(){
    cout<<"\t\t\t"<<left<<setw(10)<<id<<setw(10)<<name<<setw(10)<<sex<<setw(15)<<dob<<setw(10)<<room<<endl;
}
void Student::outputscore(){
    cout<<"\t\t\t"<<left<<setw(10)<<id<<setw(10)<<name<<setw(10)<<sex<<setw(10)<<s1<<setw(10)<<s2<<setw(10)<<s3<<setw(10)<<s4<<setw(10)<<s5<<setw(10)<<grade<<setw(10)<<result<<endl;
}
void headerinformation(){
    cout<<"\t\t\t"<<left<<setw(10)<<"ID"<<setw(10)<<"Name"<<setw(10)<<"Sex"<<setw(15)<<"Date_Of_Birth"<<setw(10)<<"Room"<<endl;
}
void headerscore(){
    cout<<"\t\t\t"<<left<<setw(10)<<"ID"<<setw(10)<<"Name"<<setw(10)<<"Sex"<<setw(10)<<"Java"<<setw(10)<<"C#"<<setw(10)<<"Kotlin"<<setw(10)<<"Swift"<<setw(10)<<setw(10)<<"Flutter"<<setw(10)<<"Grade"<<setw(10)<<"Result"<<endl;
}
char studentGrade(float avg){
    if(avg >= 90)
        return 'A';
    else if(avg>= 80)
        return 'B';
    else if(avg>= 70)
        return 'C';
    else if(avg>= 60)
        return 'D';
    else if(avg>= 50)
        return 'E';
    else 
        return 'F';
}
char* studentResult(float avg){
    if(avg >= 50){
        return "Passed";
    }
    else
        return "Fail";
}



void writefile(){
    fstream fp;
    fp.open("Student.bin",ios::out | ios::binary);
    if(fp.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }
    Student s;
    char op;
    while(1){
        s.input();
        fp.write((char*)&s,sizeof(Student));

        again:
        cout<<"\t\t\t  Do you want to continue or not (y/n): "<<endl;;
        op = getch();
        if(op == 'y' || op == 'Y')
            continue;
        else if(op == 'n' || op == 'N')
            break;
        else
            goto again;
    }

}



void printScore(Student *s, int n){
	cout<<"\t\t\t==================================>>> VEIW STUDENT SCORE <<<======================================"<<endl;
	cout<<"\n";
    headerscore();
    for(int i=0; i<n; i++){
    	cout<<"\t\t\t-------------------------------------------------------------------------------------------------"<<endl;
        s[i].outputscore();
    }
    cout<<"\t\t\t**************************************************************************************************"<<endl;
}
void printInformation(Student *s, int n){
	cout<<"\t\t\t==========>>> VEIW STUDENT INFORMATION <<<=========="<<endl;
	cout<<endl;
    headerinformation();
    
    for(int i=0; i<n; i++){
    	cout<<"\t\t\t---------------------------------------------------"<<endl;
        s[i].outputinformation();
    }
    cout<<"\t\t\t****************************************************"<<endl;
}
void readfile(char op){
    fstream fin;
    fin.open("Student.bin",ios::in |ios::binary);
    if(fin.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }
    Student *s;

    int n;

    fin.seekg(0,ios::end);
    n = fin.tellg()/sizeof(Student);
    fin.seekg(0,ios::beg);

    if(n == 0){
        cout<<"No record in the file"<<endl;
        return ;
    }
    else{
        s = new Student[n];
        fin.read((char*)s,n*sizeof(Student));
        fin.close();
    }
    
    if(op == 'a')
        printInformation(s,n);
    else
        printScore(s,n);

}




void search(){
    fstream fin;
    fin.open("Student.bin",ios::in |ios::binary);
    if(fin.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }
    Student *s;

    int n;

    fin.seekg(0,ios::end);
    n = fin.tellg()/sizeof(Student);
    fin.seekg(0,ios::beg);

    if(n == 0){
        cout<<"No record in the file"<<endl;
        return ;
    }
    else{
        s = new Student[n];
        fin.read((char*)s,n*sizeof(Student));
        fin.close();
    }


int searchID;
int b=0;
    cout<<"\t\t\t =>\t Please Enter ID to Search : "; 
	cin>>searchID;
    for(int i=0; i<n; i++){
        if(searchID == s[i].getID()){
        	b=1;
            headerinformation();
            s[i].outputinformation();
            cout<<"\t\t\t Search Found.....................!";
        }
        
    }
    if(b==0){
    	cout<<"\t\t\t\aSearch Not Found..................!";
	}
}
	

void update(){
    fstream fin;
    fin.open("Student.bin",ios::in |ios::binary);
    if(fin.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }
    Student *s;

    int n;

    fin.seekg(0,ios::end);
    n = fin.tellg()/sizeof(Student);
    fin.seekg(0,ios::beg);

    if(n == 0){
        cout<<"No record in the file"<<endl;
        return ;
    }
    else{
    	
        s = new Student[n];
        fin.read((char*)s,n*sizeof(Student));
        fin.close();
    }

    int searchID;
    int b=0;
    cout<<"\t\t\t =>\t Please Enter ID to Update : ";
    cin>>searchID;
    for(int i=0; i<n; i++){
        if(searchID == s[i].getID()){
        	b=1;
        	cout<<"\t\t\t\t     >>>> Input New Data >>>>"<<endl;
            s[i].input();
           	cout<<"\t\t\t Update Successful..........."<<endl;

        }
        
    }

    fstream fout;
    fout.open("tmp.bin",ios::out |ios::binary);
    if(fout.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }
    if(b==0){
    	 fout.write((char*)s,n*sizeof(Student)); 
	    fout.close();
		cout<<"\t\t\t\aUpdate Not successful............................!"<<endl;
	    remove("Student.bin");
	    rename("tmp.bin","Student.bin");
	}
        
   
    


}
void deleteID(){
    fstream fin;
    fin.open("Student.bin",ios::in |ios::binary);
    if(fin.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }
    fstream fout;
    fout.open("tmp.bin",ios::out | ios::binary);
    if(fout.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }

    Student s;
    int searchID;
    int isFound = -1;
    cout<<"\t\t\t =>\t Please Enter ID to Delete : "; 
	cin>>searchID;
    while(fin.read((char*)&s,sizeof(Student))){
        if(searchID == s.getID()){
            isFound ++;
        }
        else{
            fout.write((char*)&s,sizeof(Student));
        }
    }
    fin.close();
    fout.close();
    remove("Student.bin");
    rename("tmp.bin","Student.bin");
    if(isFound == -1){
        cout<<"\t\t\t\aDelete not successful"<<endl;
    }
    else 
        cout<<"\t\t\t\aDelete successful...........................!"<<endl;

}
void Insertfile(){
    fstream fout;
    fout.open("Student.bin",ios::app | ios::binary);  
    if(fout.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }
    Student s;
    char op;
    while(1){
        s.input();
        fout.write((char*)&s,sizeof(Student));

        again:
        cout<<"\t\t\t Do you want to continue or not (y/n):  ";
        op = getch();
        if(op == 'y' || op == 'Y')
            continue;
        else if(op == 'n' || op == 'N')
            break;
        else
            goto again;
    }

}
void sortfile(){
    fstream fin;
    fin.open("Student.bin",ios::in |ios::binary);
    if(fin.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }
    Student *s;

    int n;

    fin.seekg(0,ios::end);
    n = fin.tellg()/sizeof(Student);
    fin.seekg(0,ios::beg);

    if(n == 0){
        cout<<"No record in the file"<<endl;
        return ;
    }
    else{
        s = new Student[n];
        fin.read((char*)s,n*sizeof(Student));
        fin.close();
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(s[i].getID() > s[j].getID()){
                Student tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }

    fstream fout;
    fout.open("tmp.bin",ios::out |ios::binary);
    if(fout.fail()){
        cout<<"Cannot opening the file"<<endl;
        return ;
    }
        
    fout.write((char*)s,n*sizeof(Student)); 
    fout.close();

    remove("Student.bin");
    rename("tmp.bin","Student.bin");
    cout<<"\t\t\t ===============>>> After Sort <<<=============="<<endl;
    cout<<endl;
    headerinformation();
    cout<<"\t\t\t--------------------------------------------------"<<endl;
    for(int i=0;i<n;i++){
    	 s[i].outputinformation();
	}
    cout<<"\t\t\t\aSort successful.........................!"<<endl;
    



}
void menu(){
	system("cls");
	system("color a");
	printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2  MAIN MENU \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
	printf("\t\t\t\xdb\xdb\xdb\xb2 [1].INPUT STUDENT  INFORMATION  \n");
	printf("\n\t\t\t\xdb\xdb\xdb\xb2 [2].VIEW  STUDENT  INFORMATION \n");
	printf("\n\t\t\t\xdb\xdb\xdb\xb2 [3].SEARCH STUDENT INFORMATION\n\n");
	printf("\t\t\t\xdb\xdb\xdb\xb2 [4].UPDATE STUDENT INFORMATION \n\n");
	printf("\t\t\t\xdb\xdb\xdb\xb2 [5].DELETE STUDENT INFORMATION \n\n");
	printf("\t\t\t\xdb\xdb\xdb\xb2 [6].INSERT STUDENT INFORMATION \n\n");
	printf("\t\t\t\xdb\xdb\xdb\xb2 [7].SORT   STUDENT INFORMATION \n\n");
	printf("\t\t\t\xdb\xdb\xdb\xb2 [0].EXIT---(^_^)--- APPLICATION \n\n");
	printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");

}



int main(){
	loading();
	Login();
	credit();
	welcome();
    int ch;
    char op;
    do{
    	system("cls");
        menu();
        cout<<endl;
        cout<<"\t\t\t =>\t Please Enter option [0-7]: ";
	    cin>>ch;
        cout<<"\t\t\t ----------------------------------------"<<endl;
        switch(ch){
            case 1:
                writefile();
            break;
            case 2:{
            	cout<<"\t\t\t [a]. view student information "<<endl;
                cout<<"\t\t\t [b]. view student score       "<<endl;
                cout<<"\t\t\t => Please Enter option(a or b): "; cin>>op;      
                readfile(op);
				
			}break;
                
            case 3:{
            	search();
            	
			}break;
            case 4:{
            	
				update();
				
			}break;
            case 5:{
            	
			 deleteID();
			 
			}break;
            case 6:{
            	
            	Insertfile();
				
			}break;
            case 7:{
            	
            	sortfile();
            	
            	
			}break;
			
        }
        getch();
    }while(ch != 0);
    
}
