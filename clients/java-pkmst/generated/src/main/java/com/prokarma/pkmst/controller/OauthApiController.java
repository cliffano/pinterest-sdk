package com.prokarma.pkmst.controller;

import com.prokarma.pkmst.model.Error;
import com.prokarma.pkmst.model.OauthAccessTokenResponse;

import io.swagger.annotations.*;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;
import org.springframework.beans.factory.annotation.Autowired;

import java.util.List;
import com.fasterxml.jackson.databind.ObjectMapper;
import java.io.IOException;
/**
 * Api implementation
 * @author pkmst
 *
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2022-07-01T11:59:50.950161Z[Etc/UTC]")
@Controller
public class OauthApiController implements OauthApi {
    private final ObjectMapper objectMapper;
@Autowired
    public OauthApiController(ObjectMapper objectMapper) {
        this.objectMapper = objectMapper;
    }

    public ResponseEntity<OauthAccessTokenResponse> oauthToken(@ApiParam(value = "", required=true, allowableValues="authorization_code, refresh_token") @RequestPart(value="grant_type", required=true)  String grantType,
        @RequestHeader(value = "Accept", required = false) String accept) throws Exception {
        // do some magic!

        if (accept != null && accept.contains("application/json")) {
            return new ResponseEntity<OauthAccessTokenResponse>(objectMapper.readValue("", OauthAccessTokenResponse.class), HttpStatus.OK);
        }

        return new ResponseEntity<OauthAccessTokenResponse>(HttpStatus.OK);
    }

}
