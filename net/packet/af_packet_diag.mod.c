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
	{ 0xd17ad3ea, "sock_diag_put_meminfo" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfc51aef, "sock_diag_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb15308fb, "sock_diag_put_filterinfo" },
	{ 0xb91f03d1, "sock_i_ino" },
	{ 0xdf448d1c, "fanout_mutex" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x34df43d0, "sock_diag_register" },
	{ 0xd367601c, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc554f246, "nla_reserve_nohdr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x98c37d6d, "sock_diag_save_cookie" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xef4feda1, "sock_i_uid" },
	{ 0xcbdda75c, "__netlink_dump_start" },
	{ 0x11e2af69, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1A681A146239EACD5C1F46F");
