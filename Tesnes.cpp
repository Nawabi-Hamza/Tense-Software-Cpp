#include<iostream>
#include<windows.h>
#include<cstdlib>
using namespace std;
void structure(){
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color,3);
					string a[3] ,t[14];
        char at,in;
        //present tense with variable
	   a[0]="1.Present Tense";
	   			t[0]="Present Tense";
				t[1]="1-Simple Present Tense";
				t[2]="2-Simple Present Continues Tense";
				t[3]="3-Simple Present Perfect Tense";
				t[4]="4-Simple Present Perfect Continues Tense";
		 //Past tense with variable		
	   a[1]="2.Past Tense"; 
	            t[5]="Past Tense";
				t[6]="1-Simple Past Tense";
				t[7]="2-Simple Past Continues Tense";
				t[8]="3-Simple Past Perfect Tense";
				t[9]="4-Simple Past Perfect Continues Tense";
		 //future tense with variable
	   a[2]="3.Future Tense";
       			t[10]="Future Tense";
				t[11]="1-Simple Future Tense";
				t[12]="2-Simple Future Continues Tense";
				t[13]="3-Simple Future Perfect Tense";
				// show three tense present,past,future
	    cout<<"\t \t"<<a[0]<<endl;
	    cout<<"\t \t"<<a[1]<<endl;
	    cout<<"\t \t"<<a[2]<<endl;
	    cout<<"Please Select by 1,2,3 ";
	    //ask for which tense from three tense
		printf("-------->");
		cin>>at;
		system("CLS");
//in here we use condition for three tense and this is present tense
		if      (at=='1'){
				//it is a massege for type of simple present tense 
		cout<<"Please select which type of Present Tense you want to learn!"<<endl;
   			    cout<<t[1]<<endl;
		    	cout<<t[2]<<endl;
     	        cout<<t[3]<<endl;
	            cout<<t[4]<<endl;
	                  //which type of present tense the user want show
	            printf("-------->");
	            cin>>in;
	            system("CLS");
	                  //we use condition fo user input for type of present tense
	                              //simple present tense structure and example
		              if (in=='1'){
		              	SetConsoleTextAttribute(color,4);
		              	//Here is the structure of simple present tense
		              		cout<<"Structure Simple Present Tense"<<endl;
							cout<<"Positive= S+V+COM."<<endl;
							cout<<"Negative= S+Do/Does+Not+V+COM."<<endl;
							cout<<"Quastion= Do/Does+S+V+COM+?"<<endl;
							cout<<"W.H= Wh+Do/Does+S+V+COM+?"<<endl;
							cout<<"Note: in positive at (he,she,it) take (s,es)"<<endl;
							//in here all of example of present tense
							cout<<"\t EX:I go to University."<<endl;
							cout<<"\t EX:She washes the cloth."<<endl;
							cout<<"\t EX:He talks english."<<endl;
							cout<<"\t EX:I do not go to University."<<endl;
							cout<<"\t EX:She does not wash the cloth."<<endl;
							cout<<"\t EX:He does not talk english."<<endl;
							cout<<"\t EX:Do I go to University?"<<endl;
							cout<<"\t EX:Does She wash the cloth?"<<endl;
							cout<<"\t EX:Does He talk english?"<<endl;
							cout<<"\t EX:When Do You go to University?"<<endl;
							cout<<"\t EX:What Does She wash ?"<<endl;
							cout<<"\t EX:Why Does He talk english?"<<endl;
							
							     //present continues tense structure with example
					  }else if (in=='2'){
					  	cout<<"Structure Present Continues Tense"<<endl;
							cout<<"Positive= S+Tobe+Ving+COM."<<endl;
							cout<<"Negative= S+Tobe+Not+Ving+COM."<<endl;
							cout<<"Quastion= Tobe+S+Ving+COM+?"<<endl;
							cout<<"W.H= Wh+Tobe+S+Ving+COM+?"<<endl;
						cout<<"\t EX:I am going to University."<<endl;
						cout<<"\t EX:They are coming home."<<endl;
						cout<<"\t EX:She is stoping the car."<<endl;
						cout<<"\t EX:I am not going to University."<<endl;
						cout<<"\t EX:They are not coming home."<<endl;
						cout<<"\t EX:She is not stoping the car."<<endl;
						cout<<"\t EX:Am I going to University?"<<endl;
						cout<<"\t EX:Are They coming home?"<<endl;
						cout<<"\t EX:Is She stoping the car?"<<endl;
						cout<<"\t EX:When am I going to University?"<<endl;
						cout<<"\t EX:Why are They coming home?"<<endl;
						cout<<"\t EX:why is She stoping the car?"<<endl;
						
						        //present perfect structure with example
					  }else if (in=='3'){
					  	cout<<"Structure Present Perfect Tense"<<endl;
							cout<<"Positive= S+Have/Has+V3+COM."<<endl;
							cout<<"Negative= S+Have/Has+Not+V3+COM."<<endl;
							cout<<"Quastion= Have/Has+S+V3+COM+?"<<endl;
							cout<<"W.H= Wh+Have/Has+S+V3+COM+?"<<endl;
						cout<<"\t EX:I have gone to University."<<endl;
						cout<<"\t EX:They have come home."<<endl;
						cout<<"\t EX:She has stopped the car."<<endl;
						cout<<"\t EX:I have not gone to University."<<endl;
						cout<<"\t EX:They heve not come home."<<endl;
						cout<<"\t EX:She has not stopped the car."<<endl;
						cout<<"\t EX:Have I gone to University?"<<endl;
						cout<<"\t EX:Have They come home?"<<endl;
						cout<<"\t EX:Has She stopped the car?"<<endl;
						cout<<"\t EX:When have I gone to University?"<<endl;
						cout<<"\t EX:Why have They come home?"<<endl;
						cout<<"\t EX:why has She stopped the car?"<<endl;
						       //present  perfect continues tense with example
					  }else if (in=='4'){
					  	cout<<"Structure Present Perfect Continues Tense"<<endl;
							cout<<"Positive= S+Have/Has+Been+Ving+COM."<<endl;
							cout<<"Negative= S+Have/Has+Been+Not+Ving+COM."<<endl;
							cout<<"Quastion= Have/Has+S+Been+Ving+COM+?"<<endl;
							
						cout<<"\t EX:I have been going to University since 1:00 O'clock."<<endl;
						cout<<"\t EX:They have been coming home for 3hours."<<endl;
						cout<<"\t EX:She has been stoping the car for 2minute."<<endl;
						cout<<"\t EX:I have not been going to University since 1:00 O'clock."<<endl;
						cout<<"\t EX:They have not been coming home for 3hours."<<endl;
						cout<<"\t EX:She has not been stoping the car for 2minute."<<endl;
			     		cout<<"\t EX:I have been going to University since 1:00 O'clock."<<endl;
						cout<<"\t EX:Have They been coming home for 3hours."<<endl;
						cout<<"\t EX:Has She been stoping the car for 2minute."<<endl;
				
					 	    //if the user does not enter the correct number this massege will display
						  }else {cout<<"This is not in program Thanks!"<<endl;
						  }}
		
//this is another condition for three tenses and this is past tense
		else if (at=='2'){
			cout<<"Please select which type of Past Tense you want to learn!"<<endl;
		    	cout<<t[6]<<endl;
		    	cout<<t[7]<<endl;
     	        cout<<t[8]<<endl;
	            cout<<t[9]<<endl;
	            printf("-------->");
	            cin>>in;
				system("CLS");
	                if (in=='1'){
			SetConsoleTextAttribute(color,8);
	                	
	                		//Here is the structure of simple Past tense
		              		cout<<"Structure Simple Past Tense"<<endl;
							cout<<"Positive= S+V2+COM."<<endl;
							cout<<"Negative= S+Did+Not+V+COM."<<endl;
							cout<<"Quastion= Did+S+V+COM+?"<<endl;
							cout<<"W.H= Wh+Did+S+V+COM+?"<<endl;
							//in here all of example of present tense
							cout<<"\t EX:I went to University."<<endl;
							cout<<"\t EX:She washed the cloth."<<endl;
							cout<<"\t EX:He talked english."<<endl;
							cout<<"\t EX:I did not go to University."<<endl;
							cout<<"\t EX:She did not wash the cloth."<<endl;
							cout<<"\t EX:He did not talk english."<<endl;
							cout<<"\t EX:Did I go to University?"<<endl;
							cout<<"\t EX:Did She wash the cloth?"<<endl;
							cout<<"\t EX:Did He talk english?"<<endl;
							cout<<"\t EX:When did You go to University?"<<endl;
							cout<<"\t EX:What did She wash ?"<<endl;
							cout<<"\t EX:Why did He talk english?"<<endl;
	            
				}else if (in=='2'){
					//this the structure of past continues tense
				cout<<"Structure Past Continues Tense"<<endl;
							cout<<"Positive= S+Was/Were+Ving+COM."<<endl;
							cout<<"Negative= S+Was/Were+Not+Ving+COM."<<endl;
							cout<<"Quastion= Was/Were+S+Ving+COM+?"<<endl;
							cout<<"W.H= Wh+Was/Were+S+Ving+COM+?"<<endl;
						cout<<"\t EX:I was going to University."<<endl;
						cout<<"\t EX:They were coming home."<<endl;
						cout<<"\t EX:She was stoping the car."<<endl;
						cout<<"\t EX:I was not going to University."<<endl;
						cout<<"\t EX:They were not coming home."<<endl;
						cout<<"\t EX:She was not stoping the car."<<endl;
						cout<<"\t EX:was I going to University?"<<endl;
						cout<<"\t EX:were They coming home?"<<endl;
						cout<<"\t EX:was She stoping the car?"<<endl;
						cout<<"\t EX:When was I going to University?"<<endl;
						cout<<"\t EX:Why were They coming home?"<<endl;
						cout<<"\t EX:why was She stoping the car?"<<endl;
				}else if(in=='3'){
					cout<<"Structure Past Perfect Tense"<<endl;
							cout<<"Positive= S+Had+V3+COM."<<endl;
							cout<<"Negative= S+Had+Not+V3+COM."<<endl;
							cout<<"Quastion= Had+S+V3+COM+?"<<endl;
							cout<<"W.H= Wh+Had+S+V3+COM+?"<<endl;
						cout<<"\t EX:I had gone to University before you came."<<endl;
						cout<<"\t EX:They had come home before I said."<<endl;
						cout<<"\t EX:She had stopped the car before you went."<<endl;
						cout<<"\t EX:I had not gone to University before you came."<<endl;
						cout<<"\t EX:They had not come home before I said."<<endl;
						cout<<"\t EX:She had not stopped the car before you came."<<endl;
						cout<<"\t EX:had I gone to University before you ?"<<endl;
						cout<<"\t EX:Had They come home before I said?"<<endl;
						cout<<"\t EX:Had She stopped the car before her brother came?"<<endl;
						cout<<"\t EX:When had I gone to University?"<<endl;
						cout<<"\t EX:Why had They come home?"<<endl;
						cout<<"\t EX:why had She stopped the car before her brother came?"<<endl;
						       //past  perfect continues tense with example
					  }else if (in=='4'){
					  	cout<<"Structure Past Perfect Continues Tense"<<endl;
							cout<<"Positive= S+Had+Been+Ving+COM."<<endl;
							cout<<"Negative= S+Had+Been+Not+Ving+COM."<<endl;
							cout<<"Quastion= Had+S+Been+Ving+COM+?"<<endl;
							
						cout<<"\t EX:I had been going to University since 1:00 O'clock before car came."<<endl;
						cout<<"\t EX:They had been coming home for 3hours before my mother came."<<endl;
						cout<<"\t EX:She had been stoping the car for 2minute before car distroy."<<endl;
						cout<<"\t EX:I had not been going to University since 1:00 O'clock before car came."<<endl;
						cout<<"\t EX:They had not been coming home for 3hours 3hours before my mother came."<<endl;
						cout<<"\t EX:She had not been stoping the car for 2minute before car distroy."<<endl;
			     		cout<<"\t EX:Had I been going to University since 1:00 O'clock before car came?"<<endl;
						cout<<"\t EX:Had They been coming home for 3hours before my mother came?"<<endl;
						cout<<"\t EX:Had She been stoping the car for 2minute before car distroy?"<<endl;
			
				}else {cout<<"This is not in program Thanks!"<<endl;}
				
				
				
	}
//this is anothor condition for three tense is and this is future tense
		else if (at=='3'){
			SetConsoleTextAttribute(color,10);
			cout<<"Please select which type of Future Tense you want to learn!"<<endl;
		    	cout<<t[11]<<endl;
		    	cout<<t[12]<<endl;
     	        cout<<t[13]<<endl;
	            printf("-------->");
	            cin>>in;
	            system("CLS");
	            if (in=='1'){
			SetConsoleTextAttribute(color,8);
	                	
	                		//Here is the structure of simple future tense
		              		cout<<"Structure Simple Future Tense"<<endl;
							cout<<"Positive= S+will+V+COM."<<endl;
							cout<<"Negative= S+will+Not+V+COM."<<endl;
							cout<<"Quastion= Will+S+V+COM+?"<<endl;
							cout<<"W.H= Wh+will+S+V+COM+?"<<endl;
							//in here all of example of future tense
							cout<<"\t EX:I will come home tomorrow."<<endl;
							cout<<"\t EX:She will have exam next week."<<endl;
							cout<<"\t EX:They will buy a car next year."<<endl;
					     	cout<<"\t EX:I will not come home tomorrow."<<endl;
							cout<<"\t EX:She will not have exam next week."<<endl;
							cout<<"\t EX:They will not buy a car next year."<<endl;
							cout<<"\t EX:Will I come home tomorrow?"<<endl;
							cout<<"\t EX:Will She have exam next week?"<<endl;
							cout<<"\t EX:Will They buy a car next year?"<<endl;
							cout<<"\t EX:When wil I come home?"<<endl;
							cout<<"\t EX:Why will she have exam?"<<endl;
							cout<<"\t EX:What will they buy?"<<endl;
	            
				}else if (in=='2'){
					//this the structure of future continues tense
				cout<<"Structure Future Continues Tense"<<endl;
							cout<<"Positive= S+Will+be+Ving+COM."<<endl;
							cout<<"Negative= S+Will+Not+be+Ving+COM."<<endl;
							cout<<"Quastion= Will+S+be+Ving+COM+?"<<endl;
							cout<<"W.H= Wh+Will+S+be+Ving+COM+?"<<endl;
						cout<<"\t EX:I will be studying at 4:00 o'clock'."<<endl;
						cout<<"\t EX:They will be talking at 2:00 o'clock'."<<endl;
						cout<<"\t EX:She will be cooling rice at night."<<endl;
						cout<<"\t EX:I will not be studying at 4:00 o'clock'."<<endl;
						cout<<"\t EX:They will not be talking at 2:00 o'clock'."<<endl;
						cout<<"\t EX:She will not be cooling rice at night."<<endl;
						cout<<"\t EX:Will I be studying at 4:00 o'clock'?"<<endl;
						cout<<"\t EX:Will They be talking at 2:00 o'clock'?"<<endl;
						cout<<"\t EX:Will She be cooling rice at night?"<<endl;
						cout<<"\t EX:What Will I be studying at 4:00 o'clock'?"<<endl;
						cout<<"\t EX:Why will They be talking at 2:00 o'clock'?"<<endl;
						cout<<"\t EX:Who Will be cooling rice at night?"<<endl;
				}else if(in=='3'){
					//this is the structure of future perfect tense
					cout<<"Structure Future Perfect Tense"<<endl;
							cout<<"Positive= S+will+have+V3+COM."<<endl;
							cout<<"Negative= S+will+have+Not+V3+COM."<<endl;
							cout<<"Quastion= Will+have+S+V3+COM+?"<<endl;
							cout<<"W.H= Wh+will+S+have+V3+COM+?"<<endl;
							printf("Note : in future perfect tese we can not use (has) never \n");
						cout<<"\t EX:I Will have watched TV, before my mom come."<<endl;
						cout<<"\t EX:-- Future Perfect --  -- Simple Present --."<<endl;
						cout<<"\t EX:He will have eaten lunch before he goes to school."<<endl;
						cout<<"\t EX:They will have talked together before police come."<<endl;
						cout<<"\t EX:I Will not have watched TV, before my mom come."<<endl;
						cout<<"\t EX:He will not have eaten lunch before he goes to school."<<endl;
						cout<<"\t EX:They will not have talked together before police come."<<endl;
						cout<<"\t EX:Will I have watched TV, before my mom come?"<<endl;
						cout<<"\t EX:Will He have eaten lunch before he goes to school?"<<endl;
						cout<<"\t EX:Will They have talked together before police come?"<<endl;
						cout<<"\t EX:What Will I have watched before my mom come?"<<endl;
						cout<<"\t EX:When Will He have eaten lunch before he goes to school?"<<endl;
						cout<<"\t EX:Who Will have talked together before police come?"<<endl;
							
				}else {cout<<"This is not in program Thanks!"<<endl;}
				
					}
			
	}
class define{
	
	
	public:
void tense(){
			
			
		string a[4] ,t[14];
        char at,in;
        //present tense with variable
        HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(color,2);
	   a[0]="1.Present Tense";
	   			t[0]="Present Tense";
				t[1]="1-Simple Present Tense";
				t[2]="2-Simple Present Continues Tense";
				t[3]="3-Simple Present Perfect Tense";
				t[4]="4-Simple Present Perfect Continues Tense";
		 //Past tense with variable		
	   a[1]="2.Past Tense"; 
	            t[5]="Past Tense";
				t[6]="1-Simple Past Tense";
				t[7]="2-Simple Past Continues Tense";
				t[8]="3-Simple Past Perfect Tense";
				t[9]="4-Simple Past Perfect Continues Tense";
		 //future tense with variable
	   a[2]="3.Future Tense";
       			t[10]="Future Tense";
				t[11]="1-Simple Future Tense";
				t[12]="2-Simple Future Continues Tense";
				t[13]="3-Simple Future Perfect Tense";
				// show three tense present,past,future
	    cout<<"\t \t"<<a[0]<<endl;
	    cout<<"\t \t"<<a[1]<<endl;
	    cout<<"\t \t"<<a[2]<<endl;
	    cout<<"Please Select by 1,2,3 ";
	    //ask for which tense from three tense
		printf("-------->");
		cin>>at;
		system("CLS");
//in here we use condition for three tense and this is present tense
		if      (at=='1'){
				//it is a massege for type of simple present tense 
				
		cout<<"Please select which type of Present Tense you want to learn!"<<endl;
   			    cout<<t[1]<<endl;
		    	cout<<t[2]<<endl;
     	        cout<<t[3]<<endl;
	            cout<<t[4]<<endl;
	                  //which type of present tense the user want show
	            printf("-------->");
	            cin>>in;
	            system("CLS");
	                  //we use condition fo user input for type of present tense
	            
				                  //simple present tense defination and example
		              if (in=='1'){
		              	SetConsoleTextAttribute(color,4);
		              		cout<<"Defination Simple Present Tense"<<endl;
							cout<<"-is used to show an action which we do every day and regularly."<<endl;
							cout<<"-shows state or being,"<<endl;
							cout<<"-shows genrall fact."<<endl;
							cout<<"\t EX:I go to University."<<endl;
							     //present continues tense with example
					  }else if (in=='2'){
					  	cout<<"Defination Present Continues Tense"<<endl;
						cout<<"-is used to show an action which happening at the moment of speaking."<<endl;
						cout<<"\t EX:I am going to University."<<endl;
						        //present perfect with example
					  }else if (in=='3'){
					  	cout<<"Defination Present Perfect Tense"<<endl;
						cout<<"-is used to show an action which started and ended unspecific time in the past."<<endl;
						cout<<"-the recent past has left its mark."<<endl;
						cout<<"\t EX:I have gone to University."<<endl;
						       //present continues perfect tense with example
					  }else if (in=='4'){
					  	cout<<"Defination Present Continues Tense"<<endl;
						cout<<"-is used to show an action that started in the past comt to present and may or may not go to future"<<endl;
					 	 cout<<"\t EX:I have been going to University (sice 2:00 /for 3hour)."<<endl;}
					 	    //if the user does not enter the correct number this massege will display
						  else{cout<<"This is not in program Thanks!"<<endl;
						  }}
		
//this is another condition for three tenses and this is past tense
		else if (at=='2'){
			SetConsoleTextAttribute(color,11);
			cout<<"Please select which type of Past Tense you want to learn!"<<endl;
		    	cout<<t[6]<<endl;
		    	cout<<t[7]<<endl;
     	        cout<<t[8]<<endl;
	            cout<<t[9]<<endl;
	            printf("-------->");
	            cin>>in;
	            system("CLS");
	                if (in=='1'){
	            	cout<<"Defination Simple Past Tense"<<endl;
	            	cout<<"-shows an action which started and ended in the past.\n";
	            	cout<<"-The past far which did not have its effects.\n";
	            	cout<<"\t  EX:I did my home work yesterday.";
				}else if (in=='2'){
					cout<<"Defination Simple Past Continues Tense"<<endl;
	            	cout<<"-shows an action which that was in progress at specific time in the past.\n";
	            	cout<<"\t  EX:I was doing my home work.\n";
					
				}else if(in=='3'){
					cout<<"Defination Simple Past Perfect Tense"<<endl;
	            	cout<<"-shows an action which that started and ended before another action in the past.\n";
	            	cout<<"\t  EX:I had done my home work before my brother came.\n";
				}else if(in=='4'){
					cout<<"Defination Past Continues Perfect Tense"<<endl;
	            	cout<<"-shows an action which that was in progress for sometimes before another action in past.\n";
	            	cout<<"\t  EX:I had been doning my home work for 1hour before teacher ask.\n";
				}else {cout<<"This is not in program Thanks!"<<endl;
				}
				
				
	}
//this is anothor condition for three tense is and this is future tense
		else if (at=='3'){
			SetConsoleTextAttribute(color,14);
			cout<<"Please select which type of Future Tense you want to learn!"<<endl;
		    	cout<<t[11]<<endl;
		    	cout<<t[12]<<endl;
     	        cout<<t[13]<<endl;
	            printf("-------->");
	            cin>>in;
	            system("CLS");
	            if (in=='1'){
	            	cout<<"Defination Simple Future Tense"<<endl;
	            	cout<<"-shows an action which that is going to happen in the coming time or int the future.\n";
	            	cout<<"\t  EX:I will talk with teacher.";
				}else if (in=='2'){
					cout<<"Defination Future Continues Tense"<<endl;
	            	cout<<"-shows an action which will be in progress at specific time in the future.\n";
	            	cout<<"\t  EX:I will be talking with teacher.\n";
					
				}else if(in=='3'){
					cout<<"Defination Future Perfect Tense"<<endl;
	            	cout<<"-shows an action which that will have been completed before another action in the future.\n";
	            	cout<<"\t  EX:I have won before you reach.\n";
				}else {cout<<"This is not in program Thanks!"<<endl;
				}
	        }
		else {
		cout<<"This is not in program thanks!"<<endl;}
				
			}

};
class pass{
	
	
	public:
	void passive(){
	cout<<"IN Progress!"<<endl;
	}
	
	
	
};
int main(){
	
	
		HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(color,4);
//a  massege for welcome  for all tenses
			cout<<"\t \t \tWelcom TO This Program           		\n	--------This Program Is Made It By Hamza_Nawabi-------- 	"<<endl;
	//at first we define our class in main
	//in class define we have two type of void (tense) and (structure) 
	define ten;
     pass ten1;
SetConsoleTextAttribute(color,11);
char i,b2,tr;
cout<<"What do you want to learn Active Voice or Passive Voice of Tenses?"<<endl;
printf("Please Select By A,B\n");
printf("\tA---Active\n");
printf("\tB---Passive\n");	
printf("------>");
cin>>i;
	if (i=='A'||i=='a'){
			cout<<"--->1.Defination"<<endl;
			cout<<"--->2.Structure"<<endl;
			cin>>b2;
			system("CLS");
			if (b2=='1'){
			ten.tense();
			}else if (b2=='2'){
			structure();
			} else {cout<<"This is not in program Thanks..."<<endl;	}
			
		}
	else if(i=='B'||i=='b'){
		ten1.passive();
		}
	else {
		cout<<"This is not in the program Thanks!"<<endl;
	}
		
		
		
		SetConsoleTextAttribute(color,7);
		cout<<endl<<"If you want to use it agian please enter (y) or for stop enter (s)"<<endl;
		cout<<"----->";
		cin>>tr;
		if (tr=='y'||tr=='Y')
		{
			system("CLS");
			main();
		}else cout<<"Thanks For Using This Program!"<<endl;
		SetConsoleTextAttribute(color,32232);
		system("pause");
	return 0; }
