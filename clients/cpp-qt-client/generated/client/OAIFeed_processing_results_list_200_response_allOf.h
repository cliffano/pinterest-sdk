/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIFeed_processing_results_list_200_response_allOf.h
 *
 * 
 */

#ifndef OAIFeed_processing_results_list_200_response_allOf_H
#define OAIFeed_processing_results_list_200_response_allOf_H

#include <QJsonObject>

#include "OAICatalogsFeedProcessingResult.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICatalogsFeedProcessingResult;

class OAIFeed_processing_results_list_200_response_allOf : public OAIObject {
public:
    OAIFeed_processing_results_list_200_response_allOf();
    OAIFeed_processing_results_list_200_response_allOf(QString json);
    ~OAIFeed_processing_results_list_200_response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICatalogsFeedProcessingResult> getItems() const;
    void setItems(const QList<OAICatalogsFeedProcessingResult> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICatalogsFeedProcessingResult> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFeed_processing_results_list_200_response_allOf)

#endif // OAIFeed_processing_results_list_200_response_allOf_H
