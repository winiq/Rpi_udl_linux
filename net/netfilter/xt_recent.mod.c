#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x8157b3f9, "seq_release_private" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0xbd19b5, "seq_read" },
	{ 0xd6e7200f, "xt_unregister_matches" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x4c705db5, "xt_register_matches" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7010b9ba, "proc_set_user" },
	{ 0x2f2a1413, "proc_create_data" },
	{ 0x95775e45, "make_kgid" },
	{ 0xca55c602, "make_kuid" },
	{ 0xc514b829, "init_user_ns" },
	{ 0xe914e41e, "strcpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x9158ff3f, "__do_once_done" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x8b2b24a2, "proc_mkdir" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x2a92e121, "__seq_open_private" },
	{ 0x37a0cba, "kfree" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "695F95E6A7EC108FDCC365A");
