<?php
declare(strict_types=1);

namespace App\Handler;

use Articus\PathHandler\Annotation as PHA;
use Articus\PathHandler\Consumer as PHConsumer;
use Articus\PathHandler\Producer as PHProducer;
use Articus\PathHandler\Attribute as PHAttribute;
use Articus\PathHandler\Exception as PHException;
use Psr\Http\Message\ServerRequestInterface;

/**
 * @PHA\Route(pattern="/resources/ad_account_countries")
 */
class ResourcesAdAccountCountries
{
    /**
     * Get ad accounts countries
     * @PHA\Get()
     * TODO check if producer is valid, if it has correct priority and if it can be moved to class annotation
     * @PHA\Producer(name=PHProducer\Transfer::class, mediaType="application/json")
     * @param ServerRequestInterface $request
     *
     * @throws PHException\HttpCode 501 if the method is not implemented
     *
     * @return \App\DTO\AdAccountsCountryResponse
     */
    public function adAccountCountriesGet(ServerRequestInterface $request): \App\DTO\AdAccountsCountryResponse
    {
        //TODO implement method
        throw new PHException\HttpCode(501, "Not implemented");
    }
}
