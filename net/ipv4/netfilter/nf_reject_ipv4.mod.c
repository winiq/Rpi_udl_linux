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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x8cb305ff, "pskb_trim_rcsum_slow" },
	{ 0xc3c019d1, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0xf729cf65, "nf_ct_attach" },
	{ 0x38762eec, "__icmp_send" },
	{ 0x9ebcac9a, "nf_ip_route" },
	{ 0x8d39172e, "nf_ip_checksum" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x14fe1d8a, "ip_route_me_harder" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0xe22d1723, "skb_put" },
	{ 0xe4e0dd93, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CF3419C0BDBD35629FDEF40");
