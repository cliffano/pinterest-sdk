<?php
/**
 * CatalogsFeedCredentials
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
 * Class representing the CatalogsFeedCredentials model.
 *
 * Use this if your feed file requires username and password.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class CatalogsFeedCredentials 
{
        /**
     * The required password for downloading a feed.
     *
     * @var string
     * @SerializedName("password")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $password;

    /**
     * The required username for downloading a feed.
     *
     * @var string
     * @SerializedName("username")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $username;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->password = isset($data['password']) ? $data['password'] : null;
        $this->username = isset($data['username']) ? $data['username'] : null;
    }

    /**
     * Gets password.
     *
     * @return string
     */
    public function getPassword()
    {
        return $this->password;
    }

    /**
     * Sets password.
     *
     * @param string $password  The required password for downloading a feed.
     *
     * @return $this
     */
    public function setPassword($password)
    {
        $this->password = $password;

        return $this;
    }

    /**
     * Gets username.
     *
     * @return string
     */
    public function getUsername()
    {
        return $this->username;
    }

    /**
     * Sets username.
     *
     * @param string $username  The required username for downloading a feed.
     *
     * @return $this
     */
    public function setUsername($username)
    {
        $this->username = $username;

        return $this;
    }
}


