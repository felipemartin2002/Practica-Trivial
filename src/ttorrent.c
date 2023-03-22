
// Trivial Torrent

// TODO: some includes here

#include "file_io.h"
#include "logger.h"

// TODO: hey!? what is this?

/**
 * This is the magic number (already stored in network byte order).
 * See https://en.wikipedia.org/wiki/Magic_number_(programming)#In_protocols
 */
static const uint32_t MAGIC_NUMBER = 0xde1c3233; // = htonl(0x33321cde);

static const uint8_t MSG_REQUEST = 0;
static const uint8_t MSG_RESPONSE_OK = 1;
static const uint8_t MSG_RESPONSE_NA = 2;

enum { RAW_MESSAGE_SIZE = 13 };


/**
 * Main function.
 */
int main(int argc, char **argv) {

	set_log_level(LOG_DEBUG);

	log_printf(LOG_INFO, "Trivial Torrent (build %s %s) by %s", __DATE__, __TIME__, "J. DOE and J. DOE");

	// ==========================================================================
	// Parse command line
	// ==========================================================================

	// TODO: some magical lines of code here that call other functions and do various stuff.

	// The following statements most certainly will need to be deleted at some point...
	(void) argc;
	(void) argv;
	(void) MAGIC_NUMBER;
	(void) MSG_REQUEST;
	(void) MSG_RESPONSE_NA;
	(void) MSG_RESPONSE_OK;
	
	//Clase con Chow
	
	char downloaded_file[] = "./torrent_samples/client/testfile";
	char *downloaded_file = "./torrent_samples/client/testfile";
	
	create_torrent_from_metainfo_file(argv[1], &tor, downloaded_file);
	char buffer[MAX_BLOCK_SIZE];
	//SObre el bucle
	if(/*Si tenemos todos los bloques usando block_map*/){
	//Con found y count podemos comprobar esta opción (buscar los bloques)
	}//En este caso no haremos nada del siguiente código (siguientes lineas)
	
	
	for(int i = 0; i < ) //peer_count{
		int s;
		//port en la foto
		int c = connect(s, &addr, sizeof(addr));
		/*
		0 peer_address << 24
		0 peer_address << 16
		0 peer_address << 8
		0 peer_address << 0
		
		"127.0.0.1" host byte orde = 0x7F
		            network byte order = 0x01
		FOTO
		0 peer_address << 24 uitn8_t
		0 peer_address << 16 uitn8_t
		0 peer_address << 8 uitn8_t
		0 peer_address << 0 uitn8_t
		*/
		if(c == -1)
		{
			perror();
			close(s);
			continue;
		}
	
	
	
	for(int j = 0; j < ) {// block_count
		//UNa opcion
		if(tor.block_map[j] == 1){
			//Tiene info sobre el bloque que tenemos en el disco
			//Si hemos sacado bloque 1 y no 2 ni 3
			/*
				[0] == 1
				[1] == 0
				[2] == 0
			
			*/
			continue; //Pasamos a la siguiente interación
		}
		//El resto del codigo
		//otra opcion
		if(tor.block_map[j] == 0){
			//Lo hacemos todo
		}
	
	
	
	}
	//Bajo este for
	close(s);
	if(/*SI tenemos todos los bloques usando block_map*/){
		
	}
	

	
	
	

	return 0;
}
