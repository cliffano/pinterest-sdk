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

#ifndef OAI_OAITermsApiHandler_H
#define OAI_OAITermsApiHandler_H

#include <QObject>

#include "OAIError.h"
#include "OAIRelatedTerms.h"
#include <QString>

namespace OpenAPI {

class OAITermsApiHandler : public QObject
{
    Q_OBJECT

public:
    OAITermsApiHandler();
    virtual ~OAITermsApiHandler();


public slots:
    virtual void termsRelated_list(QList<QString> terms);
    virtual void termsSuggested_list(QString term, qint32 limit);
    

};

}

#endif // OAI_OAITermsApiHandler_H