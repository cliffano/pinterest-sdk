<?php
/**
 * OauthAccessTokenResponse
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
 * Contact: pinterest-api@pinterest.com
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
 * Class representing the OauthAccessTokenResponse model.
 *
 * A successful OAuth access token response.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OauthAccessTokenResponse 
{
        /**
     * @var string|null
     * @SerializedName("response_type")
     * @Assert\Choice({ "authorization_code", "refresh_token" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $responseType;

    /**
     * @var string
     * @SerializedName("access_token")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $accessToken;

    /**
     * @var string
     * @SerializedName("token_type")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $tokenType;

    /**
     * @var int
     * @SerializedName("expires_in")
     * @Assert\NotNull()
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $expiresIn;

    /**
     * @var string
     * @SerializedName("scope")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $scope;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->responseType = isset($data['responseType']) ? $data['responseType'] : null;
        $this->accessToken = isset($data['accessToken']) ? $data['accessToken'] : null;
        $this->tokenType = isset($data['tokenType']) ? $data['tokenType'] : 'bearer';
        $this->expiresIn = isset($data['expiresIn']) ? $data['expiresIn'] : null;
        $this->scope = isset($data['scope']) ? $data['scope'] : null;
    }

    /**
     * Gets responseType.
     *
     * @return string|null
     */
    public function getResponseType()
    {
        return $this->responseType;
    }

    /**
     * Sets responseType.
     *
     * @param string|null $responseType
     *
     * @return $this
     */
    public function setResponseType($responseType = null)
    {
        $this->responseType = $responseType;

        return $this;
    }

    /**
     * Gets accessToken.
     *
     * @return string
     */
    public function getAccessToken()
    {
        return $this->accessToken;
    }

    /**
     * Sets accessToken.
     *
     * @param string $accessToken
     *
     * @return $this
     */
    public function setAccessToken($accessToken)
    {
        $this->accessToken = $accessToken;

        return $this;
    }

    /**
     * Gets tokenType.
     *
     * @return string
     */
    public function getTokenType()
    {
        return $this->tokenType;
    }

    /**
     * Sets tokenType.
     *
     * @param string $tokenType
     *
     * @return $this
     */
    public function setTokenType($tokenType)
    {
        $this->tokenType = $tokenType;

        return $this;
    }

    /**
     * Gets expiresIn.
     *
     * @return int
     */
    public function getExpiresIn()
    {
        return $this->expiresIn;
    }

    /**
     * Sets expiresIn.
     *
     * @param int $expiresIn
     *
     * @return $this
     */
    public function setExpiresIn($expiresIn)
    {
        $this->expiresIn = $expiresIn;

        return $this;
    }

    /**
     * Gets scope.
     *
     * @return string
     */
    public function getScope()
    {
        return $this->scope;
    }

    /**
     * Sets scope.
     *
     * @param string $scope
     *
     * @return $this
     */
    public function setScope($scope)
    {
        $this->scope = $scope;

        return $this;
    }
}


