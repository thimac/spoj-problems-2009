	program FATORIA2
	implicit none
	integer:: n, i, r
	read*,n
	r=1
	i=n
	do while (i > 1)
		r=i*r
		i=i-1
	end do
	print*,r
	end program FATORIA2

