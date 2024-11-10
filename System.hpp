#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxpages 8192
char *maxpagess[maxpages];
int maxpagesss=0;
class Variantes;
class String;
class string;
class Integer;
class Long;
class Consoles;
class Int32;
class Double;
class Float;

class String{
    protected :
        
    public :
        char *value=NULL;
        int index=0;
       
        String(const char *obj){
            value=(char*)malloc(strlen(obj)+16);
            index=maxpagesss;
            maxpagess[maxpagesss]=value;
            maxpagesss++;
            strcpy(value,obj);
        };
        String(String *obj){
            value=(char*)malloc(strlen(obj->value)+16);
            maxpagess[maxpagesss]=value;
            index=maxpagesss;
            maxpagesss++;
            strcpy(value,obj->value);
        };
     
        void operator=(const char *obj){
            long i=strlen(obj)+16;
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            strcpy(value,obj); 
            
            
        };

        String operator=(String *obj){
            String ress(obj->value);
            long i=strlen(obj->value)+16;
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            strcpy(ress.value,obj->value);
            maxpagess[ress.index]=ress.value;
            return ress;
            
        };
         
        String operator+(String& obj){
            String ress(value);
            long i=strlen(obj.value)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            ress.value=(char*)realloc((void*)value,(size_t)i); 
            maxpagess[ress.index]=ress.value;  
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        String operator+(const char *obj){
            String ress(value);
            long i=strlen(obj)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            ress.value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[ress.index]=ress.value;
            strcat(ress.value,obj); 
            return ress;
            
        };
        






        String operator+=(String& obj){
            String ress(value);
            long i=strlen(obj.value)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t) i);
            maxpagess[index]=value;
            ress.value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[ress.index]=ress.value;
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        String operator+=(const char *obj){
            String ress(value);
            long i=strlen(obj)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            ress.value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[ress.index]=ress.value;
            strcat(ress.value,obj); 
            return ress;
            
        };
        

        char *ToString(){
            char *ccc=value;
            return ccc;

        }; 
};
class string{
    protected :
        
    public :
        char *value=NULL;
        int index=0;
       
        string(const char *obj){
            value=(char*)malloc(strlen(obj)+16);
            index=maxpagesss;
            maxpagess[maxpagesss]=value;
            maxpagesss++;
            strcpy(value,obj);
        };
        string(string *obj){
            value=(char*)malloc(strlen(obj->value)+16);
            maxpagess[maxpagesss]=value;
            index=maxpagesss;
            maxpagesss++;
            strcpy(value,obj->value);
        };
     
        void operator=(const char *obj){
            long i=strlen(obj)+16;
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            strcpy(value,obj); 
            
            
        };

        string operator=(string *obj){
            string ress(obj->value);
            long i=strlen(obj->value)+16;
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            strcpy(ress.value,obj->value);
            maxpagess[ress.index]=ress.value;
            return ress;
            
        };
         
        string operator+(string& obj){
            string ress(value);
            long i=strlen(obj.value)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            ress.value=(char*)realloc((void*)value,(size_t)i); 
            maxpagess[ress.index]=ress.value;  
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        string operator+(const char *obj){
            string ress(value);
            long i=strlen(obj)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            ress.value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[ress.index]=ress.value;
            strcat(ress.value,obj); 
            return ress;
            
        };
        






        string operator+=(string& obj){
            string ress(value);
            long i=strlen(obj.value)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t) i);
            maxpagess[index]=value;
            ress.value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[ress.index]=ress.value;
            strcat(ress.value,obj.value); 
            return ress;
            
        };


        string operator+=(const char *obj){
            string ress(value);
            long i=strlen(obj)+16+strlen(ress.value);
            value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[index]=value;
            ress.value=(char*)realloc((void*)value,(size_t)i);
            maxpagess[ress.index]=ress.value;
            strcat(ress.value,obj); 
            return ress;
            
        };
        

        char *ToString(){
            char *ccc=value;
            return ccc;

        }; 
};
class Integer{
    protected :
        
     public :
        int value=0;
        Integer(int v){
            value=v;
        };
        Integer(Integer *v){
            value=v->value;
        };

        Integer(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Integer(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Integer(char *v){
            value=atoi(v);
        };
        Integer operator=(int& obj){
            Integer ii(obj);
            return ii;
            
            
        };
        Integer operator=(Integer *obj){
            Integer ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Integer operator+(int obj){
            Integer ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Integer operator+(Integer& obj){
            Integer ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Integer operator-(int obj){
            Integer ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Integer operator-(Integer& obj){
            Integer ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Integer operator*(int obj){
            Integer ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Integer operator*(Integer& obj){
            Integer ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Integer operator/(int obj){
            Integer ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Integer operator/(Integer& obj){
            Integer ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Integer operator%(int obj){
            Integer ii(value);
            ii.value=ii.value%obj;
            return ii;
            
            
        };
        Integer operator%(Integer& obj){
            Integer ii(value);
            ii.value=ii.value%obj.value;
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%d",value);
            return ccc;
        }; 


};
class Long{
    protected :
        
     public :
        long value=0;
        Long(long v){
            value=v;
        };
        Long(Long *v){
            value=v->value;
        };

        Long(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Long(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Long(char *v){
            value=atoi(v);
        };
        Long operator=(long& obj){
            Long ii(obj);
            return ii;
            
            
        };
        Long operator=(Long *obj){
            Long ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Long operator+(long obj){
            Long ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Long operator+(Long& obj){
            Long ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Long operator-(long obj){
            Long ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Long operator-(Long& obj){
            Long ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Long operator*(long obj){
            Long ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Long operator*(Long& obj){
            Long ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Long operator/(long obj){
            Long ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Long operator/(Long& obj){
            Long ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Long operator%(long obj){
            Long ii(value);
            ii.value=ii.value%obj;
            return ii;
            
            
        };
        Long operator%(Long& obj){
            Long ii(value);
            ii.value=ii.value%obj.value;
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%d",value);
            return ccc;
        }; 


};
class Float{
    protected :
        
     public :
        float value=0.00;
        Float(float v){
            value=v;
        };
        Float(Float *v){
            value=v->value;
        };

        Float(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Float(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Float(char *v){
            value=atoi(v);
        };
        Float operator=(float& obj){
            Float ii(obj);
            return ii;
            
            
        };
        Float operator=(Float *obj){
            Float ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Float operator+(float obj){
            Float ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Float operator+(Float& obj){
            Float ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Float operator-(float obj){
            Float ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Float operator-(Float& obj){
            Float ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Float operator*(float obj){
            Float ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Float operator*(Float& obj){
            Float ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Float operator/(float obj){
            Float ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Float operator/(Float& obj){
            Float ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Float operator%(float obj){
            Float ii(value);
            ii.value=(float)(int(ii.value)%int(obj));
            
            return ii;
            
            
        };
        Float operator%(Float& obj){
            Float ii(value);
            
            ii.value=(float)(int(ii.value)%int(obj.value));
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%f",value);
            return ccc;
        }; 


};


class Double{
    protected :
        
     public :
        double value=0;
        Double(double v){
            value=v;
        };
        Double(Double *v){
            value=v->value;
        };

        Double(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Double(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Double(char *v){
            value=atoi(v);
        };
        Double operator=(double& obj){
            Double ii(obj);
            return ii;
            
            
        };
        Double operator=(Double *obj){
            Double ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Double operator+(double obj){
            Double ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Double operator+(Double& obj){
            Double ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Double operator-(double obj){
            Double ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Double operator-(Double& obj){
            Double ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Double operator*(double obj){
            Double ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Double operator*(Double& obj){
            Double ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Double operator/(double obj){
            Double ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Double operator/(Double& obj){
            Double ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Double operator%(double obj){
            Double ii(value);
            ii.value=(double)(int(ii.value)%int(obj));
            return ii;
            
            
        };
        Double operator%(Double& obj){
            Double ii(value);
           ii.value=(double)(int(ii.value)%int(obj.value));
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%lf",value);
            return ccc;
        }; 


};
class Int32{
    protected :
        
     public :
        int value=0;
        Int32(int v){
            value=v;
        };
        Int32(Int32 *v){
            value=v->value;
        };

        Int32(String *v){
            char *cc=v->value;
            value=atoi(cc);
        };
        Int32(string *v){
            char *cc=v->value;
            value=atoi(cc);
        };

        Int32(char *v){
            value=atoi(v);
        };
        Int32 operator=(int& obj){
            Int32 ii(obj);
            return ii;
            
            
        };
        Int32 operator=(Int32 *obj){
            Int32 ii(obj->value);
            ii.value=obj->value;
            return ii;
            
            
        };
        Int32 operator+(int obj){
            Int32 ii(value);
            ii.value=ii.value+obj;
            return ii;
            
            
        };
        Int32 operator+(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value+obj.value;
            return ii;
            
            
        };

        Int32 operator-(int obj){
            Int32 ii(value);
            ii.value=ii.value-obj;
            return ii;
            
            
        };
        Int32 operator-(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value-obj.value;
            return ii;
            
            
        };

        Int32 operator*(int obj){
            Int32 ii(value);
            ii.value=ii.value*obj;
            return ii;
            
            
        };
        Int32 operator*(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value*obj.value;
            return ii;
            
            
        };
        Int32 operator/(int obj){
            Int32 ii(value);
            ii.value=ii.value/obj;
            return ii;
            
            
        };
        Int32 operator/(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value/obj.value;
            return ii;
            
            
        };
        Int32 operator%(int obj){
            Int32 ii(value);
            ii.value=ii.value%obj;
            return ii;
            
            
        };
        Int32 operator%(Int32& obj){
            Int32 ii(value);
            ii.value=ii.value%obj.value;
            return ii;
            
            
        };

        char *ToString(){
            char vv[4096];
            char *ccc=vv;
            strcpy(vv,"");
            sprintf(vv,"%d",value);
            return ccc;
        }; 


};

class Consoles{
    protected :
        char c[4096];
    public : 
        void WriteLine(const char *c){
            puts(c);
        };
        void WriteLine(String c){
            puts(c.ToString());
        };
        void WriteLine(string c){
            puts(c.ToString());
        };
        void WriteLine(Integer c){
            puts(c.ToString());
        };
        void WriteLine(Long c){
            puts(c.ToString());
        };
        void WriteLine(){
            puts("");
        };
        void WriteLine(Float c){
            puts(c.ToString());
        };
        void WriteLine(Double c){
            puts(c.ToString());
        };
        void WriteLine(Int32 c){
            puts(c.ToString());
        };
        void WriteLine(float c){
            Float i(c);
            puts(i.ToString());
        };
        void WriteLine(double c){
            Double i(c);
            puts(i.ToString());
        };
        void WriteLine(long c){
            Long i(c);
            puts(i.ToString());
        };

        void WriteLine(int c){
            Int32 i(c);
            puts(i.ToString());
        };


        void Write(const char *c){
            printf(c);
        };
        void Write(String c){
            printf(c.ToString());
        };
        void Write(string c){
            printf(c.ToString());
        };
        void Write(Integer c){
            printf(c.ToString());
        };
        void Write(Long c){
            printf(c.ToString());
        };
        void Write(Float c){
            printf(c.ToString());
        };
        void Write(Double c){
            printf(c.ToString());
        };

        void Write(Int32 c){
            printf(c.ToString());
        };
        void Write(float c){
            Float i(c);
            printf(i.ToString());
        };
        void Write(double c){
            Double i(c);
            printf(i.ToString());
        };
        void Write(long c){
            Long i(c);
            printf(i.ToString());
        };

        void Write(int c){
            Int32 i(c);
            printf(i.ToString());
        };



        char *ReadLine(const char *c){
            char ccc[4096];
            char *c1=ccc;
            printf(c);
            fgets(ccc,4095,stdin);
            return c1;
        };



};
class Variantes{
    protected :
        
    public :
        char *value=NULL;
        int index=0;
        double valuef=0;
        int vvalue=0;
        Variantes(const char *obj){
            value=(char*)malloc(strlen(obj)+16);
            index=maxpagesss;
            maxpagess[maxpagesss]=value;
            maxpagesss++;
            strcpy(value,obj);
            vvalue=0;
        };
        Variantes(String *obj){
            value=(char*)malloc(strlen(obj->value)+16);
            maxpagess[maxpagesss]=value;
            index=maxpagesss;
            maxpagesss++;
            strcpy(value,obj->value);
            vvalue=0;
        };
        Variantes(Variantes *obj){
            if (obj->vvalue==0){
                value=(char*)malloc(strlen(obj->value)+16);
                maxpagess[maxpagesss]=value;
                index=maxpagesss;
                maxpagesss++;
                strcpy(value,obj->value);
                vvalue=0;
            }else{
                valuef=obj->valuef;
                vvalue=1; 
            }
        };
        Variantes(float obj){
            vvalue=1;
            valuef=(double)obj;
        };

        Variantes(long obj){
            vvalue=1;
            valuef=(double)obj;
        };

        Variantes(double obj){
            vvalue=1;
            valuef=obj;
        };
        Variantes(int obj){
            vvalue=1;
            valuef=(double)obj;
        };

        void operator=(const char *obj){
            if (vvalue==0){
                long i=strlen(obj)+16;
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                strcpy(value,obj); 
            }else{
                valuef=atof(obj);
                vvalue=1;
            }
            
            
        };

        Variantes operator=(String *obj){
            if (vvalue==0){
                Variantes ress(obj->value);
                long i=strlen(obj->value)+16;
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                strcpy(ress.value,obj->value);
                maxpagess[ress.index]=ress.value;
                vvalue=0;
                return ress;
            }else{
                Variantes ress(atof(obj->value));
                
                ress.vvalue=1;
                return ress ;
            }
        };
        Variantes operator=(Variantes *obj){
            if (vvalue==0){
                Variantes ress(obj->value);
                long i=strlen(obj->value)+16;
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                strcpy(ress.value,obj->value);
                maxpagess[ress.index]=ress.value;
                vvalue=0;
                return ress;
            }else{
                Variantes ress(obj->valuef);
                
                ress.vvalue=1;
                return ress;
            }
        };
        Variantes operator=(float obj){
            char c[4096];
            if (vvalue==0){
                sprintf(c,"%f",obj);
                Variantes ress(c);
                long i=strlen(c)+16;
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                strcpy(ress.value,c);
                maxpagess[ress.index]=ress.value;
                vvalue=0;
                return ress;
            }else{
                Variantes ress(obj);
                
                ress.vvalue=1;
                return ress ;
            }
        }; 
        Variantes operator=(int obj){
            char c[4096];
            if (vvalue==0){
                sprintf(c,"%i",obj);
                Variantes ress(c);
                long i=strlen(c)+16;
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                strcpy(ress.value,c);
                maxpagess[ress.index]=ress.value;
                vvalue=0;
                return ress;
            }else{
                Variantes ress((double)obj);
                
                ress.vvalue=1;
                return ress ;
            }
        }; 


        Variantes operator+(const char *obj){
            if (vvalue==0){
                Variantes ress(value);
                long i=strlen(obj)+16+strlen(ress.value);
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                ress.value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[ress.index]=ress.value;
                strcat(ress.value,obj); 
                return ress;
            }else{
                Variantes ress(valuef);
                ress.valuef=ress.valuef+atof(obj);
                return ress;
            }
            
        };
        


        Variantes operator+(String& obj){
            if (vvalue==0){ 
                Variantes ress(value);
                long i=strlen(obj.value)+16+strlen(ress.value);
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                ress.value=(char*)realloc((void*)value,(size_t)i); 
                maxpagess[ress.index]=ress.value;  
                strcat(ress.value,obj.value); 
                return ress;
            }else{
                Variantes ress(valuef);
                ress.valuef=ress.valuef+atof(obj.value);
                return ress;
            }        
                
        };
        Variantes operator+(float obj){
            char c[4096];
            if (vvalue==0){
                sprintf(c,"%f",obj); 
                Variantes ress(value);
                long i=strlen(c)+16+strlen(ress.value);
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                ress.value=(char*)realloc((void*)value,(size_t)i); 
                maxpagess[ress.index]=ress.value;  
                strcat(ress.value,c); 
                return ress;
            }else{
                Variantes ress(valuef);
                ress.valuef=ress.valuef+(double)obj;
                return ress;
            }        
                
        };
        Variantes operator+(double obj){
            char c[4096];
            if (vvalue==0){
                sprintf(c,"%f",obj); 
                Variantes ress(value);
                long i=strlen(c)+16+strlen(ress.value);
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                ress.value=(char*)realloc((void*)value,(size_t)i); 
                maxpagess[ress.index]=ress.value;  
                strcat(ress.value,c); 
                return ress;
            }else{
                Variantes ress(valuef);
                ress.valuef=ress.valuef+(double)obj;
                return ress;
            }        
                
        };
        Variantes operator+(int obj){
            char c[4096];
            if (vvalue==0){
                sprintf(c,"%i",obj); 
                Variantes ress(value);
                long i=strlen(c)+16+strlen(ress.value);
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                ress.value=(char*)realloc((void*)value,(size_t)i); 
                maxpagess[ress.index]=ress.value;  
                strcat(ress.value,c); 
                return ress;
            }else{
                Variantes ress(valuef);
                ress.valuef=ress.valuef+(double)obj;
                return ress;
            }        
                
        };
        Variantes operator+(long obj){
            char c[4096];
            if (vvalue==0){
                sprintf(c,"%f",obj); 
                Variantes ress(value);
                long i=strlen(c)+16+strlen(ress.value);
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                ress.value=(char*)realloc((void*)value,(size_t)i); 
                maxpagess[ress.index]=ress.value;  
                strcat(ress.value,c); 
                return ress;
            }else{
                Variantes ress(valuef);
                ress.valuef=ress.valuef+(double)obj;
                return ress;
            }        
                
        };

        Variantes operator+(Variantes& obj){
            if (vvalue==0){ 
                Variantes ress(value);
                long i=strlen(obj.value)+16+strlen(ress.value);
                value=(char*)realloc((void*)value,(size_t)i);
                maxpagess[index]=value;
                ress.value=(char*)realloc((void*)value,(size_t)i); 
                maxpagess[ress.index]=ress.value;  
                strcat(ress.value,obj.value); 
                return ress;
            }else{
                Variantes ress(valuef);
                ress.valuef=ress.valuef+obj.valuef;
                return ress;
            }        
                
        };

        Variantes operator-(int obj){
            vvalue=1; 
            Variantes ii(valuef);
            ii.valuef=ii.valuef-obj;
            return ii;
            
            
        };
        Variantes operator-(double obj){
            vvalue=1; 
            Variantes ii(valuef);
            ii.valuef=ii.valuef-obj;
            return ii;
            
            
        };

        Variantes operator-(Variantes& obj){
            vvalue=1;
            Variantes ii(valuef);
            ii.valuef=ii.valuef-obj.valuef;
            return ii;
            
            
        };

        Variantes operator*(int obj){
            vvalue=1;
            Variantes ii(valuef);
            ii.valuef=ii.valuef*obj;
            return ii;
            
            
        };
        Variantes operator*(double obj){
            vvalue=1;
            Variantes ii(valuef);
            ii.valuef=ii.valuef*obj;
            return ii;
            
            
        };

        Variantes operator*(Variantes& obj){
            vvalue=1;
            Variantes ii(valuef);
            ii.valuef=ii.valuef*obj.valuef;
            return ii;
            
            
        };
        Variantes operator/(int obj){
            vvalue=1;
            Variantes ii(valuef);
            ii.valuef=ii.valuef/obj;
            return ii;
            
            
        };
        Variantes operator/(double obj){
            vvalue=1;
            Variantes ii(valuef);
            ii.valuef=ii.valuef/obj;
            return ii;
            
            
        };

        Variantes operator/(Variantes& obj){
            vvalue=1;
            Variantes ii(valuef);
            ii.valuef=ii.valuef/obj.valuef;
            return ii;
            
            
        };
        Variantes operator%(int obj){
            vvalue=1;
            Variantes ii(valuef);
            ii.valuef=(double)((int)((int) ii.valuef)%obj);
            return ii;
            
            
        };
        Variantes operator%(float obj){
            vvalue=1;
            Variantes ii(valuef);
            ii.valuef=(double)((int)ii.valuef%((int)obj));
            return ii;
            
            
        };

        Variantes operator%(Variantes& obj){
            vvalue=1;
            Variantes ii(value);
            ii.valuef=(double)((int)ii.valuef%(int)obj.valuef);
            return ii;
        };    

        char *ToString(){
            char *ccc=value;
            char c[4096];
            char *cccc=c;
            if (vvalue==0){
                return ccc;
            }else{
               
                sprintf(c,"%f",valuef);
                return cccc;
            }
            return ccc;
        }; 
};

class outs{
    protected :
        char c[4096];
    public : 
        void log(const char *c){
            puts(c);
        };
        void log(Variantes c){
            puts(c.ToString());
        };

        void log(String c){
            puts(c.ToString());
        };
        void log(string c){
            puts(c.ToString());
        };
        void log(Integer c){
            puts(c.ToString());
        };
        void log(Long c){
            puts(c.ToString());
        };
        void log(){
            puts("");
        };
        void log(Float c){
            puts(c.ToString());
        };
        void log(Double c){
            puts(c.ToString());
        };
        void log(Int32 c){
            puts(c.ToString());
        };
        void log(float c){
            Float i(c);
            puts(i.ToString());
        };
        void log(double c){
            Double i(c);
            puts(i.ToString());
        };
        void log(long c){
            Long i(c);
            puts(i.ToString());
        };

        void log(int c){
            Int32 i(c);
            puts(i.ToString());
        };


        void print(const char *c){
            printf(c);
        };
        void print(String c){
            printf(c.ToString());
        };
        void print(Variantes c){
            printf(c.ToString());
        };

        void print(string c){
            printf(c.ToString());
        };
        void print(Integer c){
            printf(c.ToString());
        };
        void print(Long c){
            printf(c.ToString());
        };
        void print(Float c){
            printf(c.ToString());
        };
        void print(Double c){
            printf(c.ToString());
        };

        void print(Int32 c){
            printf(c.ToString());
        };
        void print(float c){
            Float i(c);
            printf(i.ToString());
        };
        void print(double c){
            Double i(c);
            printf(i.ToString());
        };
        void print(long c){
            Long i(c);
            printf(i.ToString());
        };

        void print(int c){
            Int32 i(c);
            printf(i.ToString());
        };


            
        char *readLine(const char *c){
            char ccc[4096];
            char *c1=ccc;
            printf(c);
            fgets(ccc,4095,stdin);
            return c1;
        };




        


};

class inss{
    public:
        char *readLine(const char *c){
            char ccc[4096];
            char *c1=ccc;
            printf(c);
            fgets(ccc,4095,stdin);
            return c1;
        };



};

class Systems{
    public:
        outs console;
        inss in;
};

void frees(){
    long i=0;
    if (i>0)for (i=0;i<maxpagesss;i++)if( maxpagess[i]!=NULL)free( maxpagess[i]);
}
outs console;
Systems System;