<?php
/**
 * OauthAccessTokenRequestCode
 *
 * PHP version 7.1.3
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the OauthAccessTokenRequestCode model.
 *
 * A request to exchange an authorization code for an access token.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OauthAccessTokenRequestCode extends OauthAccessTokenRequest 
{
        /**
     * @var string
     * @SerializedName("code")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $code;

    /**
     * @var string
     * @SerializedName("redirect_uri")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $redirectUri;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        parent::__construct($data);

        $this->code = isset($data['code']) ? $data['code'] : null;
        $this->redirectUri = isset($data['redirectUri']) ? $data['redirectUri'] : null;
    }

    /**
     * Gets code.
     *
     * @return string
     */
    public function getCode()
    {
        return $this->code;
    }

    /**
     * Sets code.
     *
     * @param string $code
     *
     * @return $this
     */
    public function setCode($code)
    {
        $this->code = $code;

        return $this;
    }

    /**
     * Gets redirectUri.
     *
     * @return string
     */
    public function getRedirectUri()
    {
        return $this->redirectUri;
    }

    /**
     * Sets redirectUri.
     *
     * @param string $redirectUri
     *
     * @return $this
     */
    public function setRedirectUri($redirectUri)
    {
        $this->redirectUri = $redirectUri;

        return $this;
    }
}


