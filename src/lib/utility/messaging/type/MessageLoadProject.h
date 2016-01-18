#ifndef MESSAGE_LOAD_PROJECT_H
#define MESSAGE_LOAD_PROJECT_H

#include "utility/messaging/Message.h"

class MessageLoadProject: public Message<MessageLoadProject>
{
public:
	MessageLoadProject(const std::string& filePath, bool forceRefresh)
		: projectSettingsFilePath(filePath)
		, forceRefresh(forceRefresh)
	{
	}

	static const std::string getStaticType()
	{
		return "MessageLoadProject";
	}

	virtual void print(std::ostream& os) const
	{
		os << projectSettingsFilePath << ", forceRefresh: " << std::boolalpha << forceRefresh;
	}

	const std::string projectSettingsFilePath;
	const bool forceRefresh;
};

#endif // MESSAGE_LOAD_PROJECT_H
