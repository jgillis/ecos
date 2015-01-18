%Load lp_agg from lp netlib and solve it with ecos
%Test the quality of the solution

load('lp_agg.mat')
fprintf('Problem name %s\n',P.name)
A = P.A;
b = P.b;
c = P.aux.c;
[p,n] = size(A);
G     = -speye(n);
h     = zeros(n,1);
%Set the dimensions
dims.l = n;
[x,y,info,s,z] = ecos(c,G,h,dims,A,b);
%Check the residuals
pres = norm([A*x-b;G*x+s-h])
dres = norm(A'*y+G'*z+c)
comp = s'*z;
fprintf('Residuals: primal %3.3e, dual %3.3e complementarity %3.3e \n',pres,dres,comp)