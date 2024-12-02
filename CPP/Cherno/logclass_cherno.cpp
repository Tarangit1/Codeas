#include <iostream>
using namespace std;

class Log
{   public:

        enum Level{
            LevelError=0, Warning=1, LevelInfo=2
        };

    private:
        Level m_LogLevel;

    public:
        void SetLevel(Level level){
            
            m_LogLevel=level;

        }

        void Warn(const char* message){
            if(m_LogLevel>=Warning)
            cout << "[Warning]: " << message << endl;
        }
        void Error(const char* message){
                        if(m_LogLevel>=LevelError)
            cout << "[Error]: " << message << endl;
        }
        void Info(const char* message){
                        if(m_LogLevel>=LevelInfo)
            cout << "[Info]: " << message << endl;
        }

};


int main(){
    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello");
    log.Error("Hello");
    log.Info("Hello");
}


// made log class
// made enum for log level
//