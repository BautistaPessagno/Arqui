docker start bautiTP5
docker exec -it bautiTP5 make clean -C /root/Toolchain/
docker exec -it bautiTP5 make clean -C /root/
docker exec -it bautiTP5 make -C /root/Toolchain/
docker exec -it bautiTP5 make -C /root/
docker stop bautiTP5