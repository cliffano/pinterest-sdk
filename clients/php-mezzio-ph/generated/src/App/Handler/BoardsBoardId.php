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
 * @PHA\Route(pattern="/boards/{board_id:/^\\d+$/}")
 */
class BoardsBoardId
{
    /**
     * Delete board
     * @PHA\Delete()
     * TODO check if producer is valid, if it has correct priority and if it can be moved to class annotation
     * @PHA\Producer(name=PHProducer\Transfer::class, mediaType="application/json")
     * @param ServerRequestInterface $request
     *
     * @throws PHException\HttpCode 501 if the method is not implemented
     */
    public function boardsDelete(ServerRequestInterface $request)
    {
        //TODO implement method
        throw new PHException\HttpCode(501, "Not implemented");
    }
    /**
     * Get board
     * @PHA\Get()
     * TODO check if producer is valid, if it has correct priority and if it can be moved to class annotation
     * @PHA\Producer(name=PHProducer\Transfer::class, mediaType="application/json")
     * @param ServerRequestInterface $request
     *
     * @throws PHException\HttpCode 501 if the method is not implemented
     *
     * @return \App\DTO\Board
     */
    public function boardsGet(ServerRequestInterface $request): \App\DTO\Board
    {
        //TODO implement method
        throw new PHException\HttpCode(501, "Not implemented");
    }
    /**
     * Update board
     * @PHA\Patch()
     * TODO check if consumer is valid, if it has correct priority and if it can be moved to class annotation
     * @PHA\Consumer(name=PHConsumer\Json::class, mediaRange="application/json")
     * @PHA\Attribute(name=PHAttribute\Transfer::class, options={"type":\App\DTO\BoardUpdate::class,"objectAttr":"bodyData"})
     * TODO check if producer is valid, if it has correct priority and if it can be moved to class annotation
     * @PHA\Producer(name=PHProducer\Transfer::class, mediaType="application/json")
     * @param ServerRequestInterface $request
     *
     * @throws PHException\HttpCode 501 if the method is not implemented
     *
     * @return \App\DTO\Board
     */
    public function boardsUpdate(ServerRequestInterface $request): \App\DTO\Board
    {
        //TODO implement method
        /** @var \App\DTO\BoardUpdate $bodyData */
        $bodyData = $request->getAttribute("bodyData");
        throw new PHException\HttpCode(501, "Not implemented");
    }
}
