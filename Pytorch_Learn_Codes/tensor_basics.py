import torch
import numpy as np

# x = torch.empty(2, 2, 3)

# x = torch.rand(2, 2)

# x = torch.zeros(2, 2)

# x = torch.ones(2, 2, dtype=torch.int)
# print(x.size())
# print(x.dtype)

# x = torch.tensor([2.5, 0.1])
# print(x)

# x = torch.rand(2, 2)
# y = torch.rand(2, 2)
# print(x)
# print(y)
# z = x + y
# z = torch.add(x, y)
# print(z)

# y.add_(x)
# the underscore at the end of the function means that it will modify the variable that it is applied to
# print(y)

# x = torch.rand(5, 3)
# print(x)
# print(x[:, 0])
# print(x[1, :])
# print(x[1, 1].item())
# can only use item() when only one value in the tensor to get its value

# x = torch.rand(4, 4)
# print(x)
# y = x.view(16)
# y = x.view(-1, 8)
# print(y)


# a = torch.ones(5)
# print(a)
# b = a.numpy()
# print(b)
#
# a.add_(1)
# print(a)
# print(b)
# BOTH POINT TO THE SAME MEMORY LOCATION. BE CAREFUL WHILE UPDATING EACH ONE

# a = np.ones(5)
# print(a)
#
# b = torch.from_numpy(a)
# print(b)
#
# a += 1
# print(a)
# print(b)
# BOTH POINT TO THE SAME MEMORY LOCATION. BE CAREFUL WHILE UPDATING EACH ONE

# if torch.cuda.is_available():
#     device = torch.device("cuda")
#     x = torch.ones(5, device=device)
#     y = torch.ones(5)
#     y = y.to(device)
#     z = x + y
#     z = z.to("cpu")


x = torch.ones(5, requires_grad=True)
print(x)