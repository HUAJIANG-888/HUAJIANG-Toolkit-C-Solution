#ifndef __RTSPCAPTURER_H__
#define __RTSPCAPTURER_H__


class RtspCapturer
{
public:
	RtspCapturer(std::string strSection = "");
	~RtspCapturer();

	void init(int32_t chnId);
	int32_t IsInited(){return bObjIsInited;}
    int32_t channelId(){return m_dwChnId;}

    const char *strSection(){return m_strSection.c_str();}
protected:
	
private:
    std::string m_strSection;
    int32_t m_dwChnId;
    
	pthread_t mTid;
	int bObjIsInited;
};

extern int rtspSignalInit(int argc, char** argv);

#endif
