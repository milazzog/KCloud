#include "Exceptions.h"

/*
 *		######### Eccezioni
 *
*/
const char *KCloud::Exception::what() const throw (){

	return "Exception : General message!";
}

KCloud::Exception::Type KCloud::Exception::type() const{

	return Core;
}

KCloud::Exception::ExceptionSubclass KCloud::Exception::subclass() const{

	return Basic;
}

KCloud::Exception *KCloud::Exception::clone() const{

	return new Exception(*this);
}

void KCloud::Exception::raise() const{

	throw *this;
}

/*
 *		######### Eccezioni utente
 *
*/

KCloud::Exception::ExceptionSubclass KCloud::UserException::subclass() const{

	return User;
}

/*
 *		Formato mail non valido
 *
*/
const char *KCloud::BadMailException::what() const throw (){

	return "UserException : Email address pattern mismatch!";
}

KCloud::Exception::Type KCloud::BadMailException::type() const{

	return UserBadMail;
}

/*
 *		Password vuota
 *
*/
const char *KCloud::EmptyPasswordException::what() const throw (){

	return "UserException : Empty password!";
}

KCloud::Exception::Type KCloud::EmptyPasswordException::type() const{

	return UserEmptyPassword;
}

/*
 *		Lunghezza hash errata
 *
*/
const char *KCloud::BadHashLengthException::what() const throw (){

	return "UserException : Hash length mismatch!";
}

KCloud::Exception::Type KCloud::BadHashLengthException::type() const{

	return UserBadHashLength;
}

/*
 *		######### Eccezioni risorse
 *
*/
KCloud::Exception::ExceptionSubclass KCloud::ResourceException::subclass() const{

	return Resource;
}

/*
 *		Percorso vuoto
 *
*/
const char *KCloud::EmptyPathException::what() const throw (){

	return "ResourceException : Path is empty!";
}

KCloud::Exception::Type KCloud::EmptyPathException::type() const{

	return ResourceEmptyPath;
}

/*
 *		Percorso non valido
 *
*/
const char *KCloud::BadPathException::what() const throw (){

	return "ResourceException : Bad path!";
}

KCloud::Exception::Type KCloud::BadPathException::type() const{

	return ResourceBadPath;
}

/*
 *		Nome file già in uso
 *
*/
const char *KCloud::AlreadyFileNameInUseException::what() const throw (){

	return "ResourceException : File name already in use!";
}

KCloud::Exception::Type KCloud::AlreadyFileNameInUseException::type() const{

	return ResourceAlreadyFileNameInUse;
}

/*
 *		Errore durante la compressione
 *
*/
const char *KCloud::ZippingErrorException::what() const throw (){

	return "ResourceException : Error during zipping file";
}

KCloud::Exception::Type KCloud::ZippingErrorException::type() const{

	return ResourceZippingError;
}

/*
 *		Errore durante la decompressione
 *
*/
const char *KCloud::UnZippingErrorException::what() const throw (){

	return "ResourceException : Error during unzipping file";
}

KCloud::Exception::Type KCloud::UnZippingErrorException::type() const{

	return ResourceUnZippingError;
}

/*
 *		Risorsa non pronta
 *
*/
const char *KCloud::NotReadyException::what() const throw (){

	return "ResourceException : Not ready to send";
}

KCloud::Exception::Type KCloud::NotReadyException::type() const{

	return ResourceNotReady;
}

/*
 *		Errore nella cancellazione del file temporaneo
 *
*/
const char *KCloud::RemoveTempFileException::what() const throw (){

	return "ResourceException : Unable to remove temporary file!";
}

KCloud::Exception::Type KCloud::RemoveTempFileException::type() const{

	return ResourceRemoveTempFileFail;
}


/*
 *		######### Eccezioni NetObject
 *
*/
KCloud::Exception::ExceptionSubclass KCloud::NetObjectException::subclass() const{

	return NetObject;
}

/*
 *		Socket NULL o non aperta
 *
*/
const char *KCloud::InvalidSocket::what() const throw (){

	return "NetObjectException : Invalid socket";
}

KCloud::Exception::Type KCloud::InvalidSocket::type() const{

	return NetObjectInvalidSocket;
}

/*
 *		Contatore bytes non attendibile
 *
*/
const char *KCloud::UntrustedBytesCounter::what() const throw (){

	return "NetObjectException : Invalid bytes counter";
}

KCloud::Exception::Type KCloud::UntrustedBytesCounter::type() const{

	return NetObjectUntrustedBytesCounter;
}

/*
 *		######### Eccezioni base
 *
*/
/*
 *		Eccezione sconosciuta
 *
*/
KCloud::Exception::ExceptionSubclass KCloud::UnknownException::subclass() const{

	return Basic;
}

const char *KCloud::UnknownException::what() const throw (){

	return "Exception : UnknownException";
}

KCloud::Exception::Type KCloud::UnknownException::type() const{

	return Unknown;
}

/*
 *		Arrivato pacchetto corroto
 *
*/
KCloud::Exception::ExceptionSubclass KCloud::CorruptPacketException::subclass() const{

	return Basic;
}

const char *KCloud::CorruptPacketException::what() const throw (){

	return "Exception : Corrupt packet received";
}

KCloud::Exception::Type KCloud::CorruptPacketException::type() const{

	return CorruptPacket;
}

/*
 *		Connessione caduta
 *
*/

KCloud::Exception::ExceptionSubclass KCloud::ConnectionFallException::subclass() const{

	return Basic;
}

const char *KCloud::ConnectionFallException::what() const throw (){

	return "Exception : The connection is fallen";
}

KCloud::Exception::Type KCloud::ConnectionFallException::type() const{

	return ConnectionFall;
}


/*
 *		Eccezioni Client
 *
 */

KCloud::Exception::ExceptionSubclass KCloud::ClientException::subclass() const
{
	return Client;
}

const char *KCloud::NullUserPointer::what() const throw (){
	return "ClientException : User not set or NULL!";
}

KCloud::Exception::Type KCloud::NullUserPointer::type() const{

	return ClientNullUserPointer;
}

const char *KCloud::UnreachableServer::what() const throw (){

	return "ClientException : Server unreachable!";
}

KCloud::Exception::Type KCloud::UnreachableServer::type() const{

	return ClientUnreachableServer;
}

const char *KCloud::NotLogged::what() const throw (){

	return "ClientException : User is not logged";
}

KCloud::Exception::Type KCloud::NotLogged::type() const{

	return ClientNotLogged;
}

/*
 *		Eccezioni Database
 *
 */

KCloud::Exception::ExceptionSubclass KCloud::DatabaseException::subclass() const{

	return Database;
}

const char *KCloud::OpenFailure::what() const  throw (){

	return "DatabaseException : Can't open database!";
}

KCloud::Exception::Type KCloud::OpenFailure::type() const{

	return DatabaseNotOpen;
}

const char *KCloud::QueryFailure::what() const throw(){

	return "DatabaseException : Failed to exec SQL statement!";
}

KCloud::Exception::Type KCloud::QueryFailure::type() const{

	return DatabaseQueryError;
}

const char *KCloud::MultipleRowsForPrimaryKey::what() const throw (){

	return "DatabaseException : Multiple rows for a primary key!";
}

KCloud::Exception::Type KCloud::MultipleRowsForPrimaryKey::type() const{

	return DatabaseMultipleRowsForPrimaryKey;
}

const char *KCloud::ResourceNotExists::what() const throw (){

	return "DatabaseException : No Resources with this id!";
}

KCloud::Exception::Type KCloud::ResourceNotExists::type() const{

	return DatabaseResourceNotFound;
}

const char *KCloud::UserNotExists::what() const throw (){

	return "DatabaseException : No Users with this email!";
}

KCloud::Exception::Type KCloud::UserNotExists::type() const{

	return DatabaseUserNotFound;
}

KCloud::Exception::ExceptionSubclass KCloud::WorkerSeverException::subclass() const{

	return WorkerServer;
}

const char *KCloud::RecursionError::what() const throw (){

	return "WorkerServerException : Recursion error! ";
}

KCloud::Exception::Type KCloud::RecursionError::type() const{

	return ServerRecursionError;
}
