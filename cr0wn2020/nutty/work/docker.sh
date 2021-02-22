docker run -it \
  --name musl \
	--hostname musler \
	-p 23948:23948 \
	--cap-add=SYS_PTRACE \
  --mount type=bind,src=$HOME/docker_shared,dst=/root/host \
  alpine 
