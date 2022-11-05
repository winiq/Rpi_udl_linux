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
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x88f2e332, "nf_log_unregister" },
	{ 0x9ba1c3f8, "nf_log_register" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0x82baa22e, "init_net" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x232b4bee, "nf_log_set" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xaab7d71, "from_kgid_munged" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xc514b829, "init_user_ns" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0x73e21d74, "nf_log_unset" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B18B017471954CE1827FEB");
