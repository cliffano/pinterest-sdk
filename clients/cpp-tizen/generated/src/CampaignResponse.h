/*
 * CampaignResponse.h
 *
 * 
 */

#ifndef _CampaignResponse_H_
#define _CampaignResponse_H_


#include <string>
#include "AdCommon_tracking_urls.h"
#include "EntityStatus.h"
#include "ObjectiveType.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class CampaignResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	CampaignResponse();
	CampaignResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CampaignResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Campaign ID.
	 */
	std::string getId();

	/*! \brief Set Campaign ID.
	 */
	void setId(std::string  id);
	/*! \brief Get Campaign's Advertiser ID.
	 */
	std::string getAdAccountId();

	/*! \brief Set Campaign's Advertiser ID.
	 */
	void setAdAccountId(std::string  ad_account_id);
	/*! \brief Get Campaign name.
	 */
	std::string getName();

	/*! \brief Set Campaign name.
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	EntityStatus getStatus();

	/*! \brief Set 
	 */
	void setStatus(EntityStatus  status);
	/*! \brief Get Campaign total spending cap.
	 */
	int getLifetimeSpendCap();

	/*! \brief Set Campaign total spending cap.
	 */
	void setLifetimeSpendCap(int  lifetime_spend_cap);
	/*! \brief Get Campaign daily spending cap.
	 */
	int getDailySpendCap();

	/*! \brief Set Campaign daily spending cap.
	 */
	void setDailySpendCap(int  daily_spend_cap);
	/*! \brief Get Order line ID that appears on the invoice.
	 */
	std::string getOrderLineId();

	/*! \brief Set Order line ID that appears on the invoice.
	 */
	void setOrderLineId(std::string  order_line_id);
	/*! \brief Get 
	 */
	AdCommon_tracking_urls getTrackingUrls();

	/*! \brief Set 
	 */
	void setTrackingUrls(AdCommon_tracking_urls  tracking_urls);
	/*! \brief Get Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
	 */
	int getStartTime();

	/*! \brief Set Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
	 */
	void setStartTime(int  start_time);
	/*! \brief Get Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
	 */
	int getEndTime();

	/*! \brief Set Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
	 */
	void setEndTime(int  end_time);
	/*! \brief Get 
	 */
	ObjectiveType getObjectiveType();

	/*! \brief Set 
	 */
	void setObjectiveType(ObjectiveType  objective_type);
	/*! \brief Get Campaign creation time. Unix timestamp in seconds.
	 */
	int getCreatedTime();

	/*! \brief Set Campaign creation time. Unix timestamp in seconds.
	 */
	void setCreatedTime(int  created_time);
	/*! \brief Get UTC timestamp. Last update time.
	 */
	int getUpdatedTime();

	/*! \brief Set UTC timestamp. Last update time.
	 */
	void setUpdatedTime(int  updated_time);
	/*! \brief Get Always \"campaign\".
	 */
	std::string getType();

	/*! \brief Set Always \"campaign\".
	 */
	void setType(std::string  type);
	/*! \brief Get Determines if a campaign has flexible daily budgets setup.
	 */
	bool getIsFlexibleDailyBudgets();

	/*! \brief Set Determines if a campaign has flexible daily budgets setup.
	 */
	void setIsFlexibleDailyBudgets(bool  is_flexible_daily_budgets);
	/*! \brief Get Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
	 */
	bool getIsCampaignBudgetOptimization();

	/*! \brief Set Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
	 */
	void setIsCampaignBudgetOptimization(bool  is_campaign_budget_optimization);

private:
	std::string id;
	std::string ad_account_id;
	std::string name;
	EntityStatus status;
	int lifetime_spend_cap;
	int daily_spend_cap;
	std::string order_line_id;
	AdCommon_tracking_urls tracking_urls;
	int start_time;
	int end_time;
	ObjectiveType objective_type;
	int created_time;
	int updated_time;
	std::string type;
	bool is_flexible_daily_budgets;
	bool is_campaign_budget_optimization;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CampaignResponse_H_ */