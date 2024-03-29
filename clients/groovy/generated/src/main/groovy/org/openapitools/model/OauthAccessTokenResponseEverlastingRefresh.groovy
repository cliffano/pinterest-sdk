package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.OauthAccessTokenResponse;

@Canonical
class OauthAccessTokenResponseEverlastingRefresh {
    
    String refreshToken
    
    Integer refreshTokenExpiresIn
    
    Integer refreshTokenExpiresAt
}
