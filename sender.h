/*
 * File:   sender.h
 * Author: DoI
 *
 */

void setup_tcp(int sock);
int send_udp(char * host, int port, int src_port, char * packet, unsigned long packet_len);
int send_tcp(char * host, int port, int src_port, char * packet, unsigned long packet_len);
void destroy_socket(int sock);
